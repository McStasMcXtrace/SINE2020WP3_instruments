#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 11 14:08:31 2019

@author: xav
"""

#%%
#from matplotlib.pyplot import *
from scipy import *
import numpy as np
from fast_histogram import histogram1d

def read_data(filename):
"""
read_data: loads PSD_MAGiC.comp generated output into an array
filename = path to the file to be imported
"""
    data=[]
    with open(filename,'r') as fid:
        for line in fid:
            # In the case of mpi>1 some lines are written by multiple processes at the same time
            # This is used to filter such lines
            if len(line) == 49:
                try:
                    # Extract only relevant information
                    data.append([float(line[12:24]),float(line[24:36]),float(line[36:48])])
                except:
                    pass
            else:
                pass

    return(asarray(data))

def populate_data(mode, size):
"""
populate_data: fill an array with multiple detector files in case of multiple steps scans
"""
    temp = read_data('MAGiC_'+mode+'/0/TOF_events.txt')
    for i in range(1,size):
        data_temp = read_data('MAGiC_'+mode+'/'+str(i)+'/TOF_events.txt')
        if len(data_temp) >0:
            temp = vstack((data_temp,temp))

    return(temp)

#%% Extract data from mcstas simulation
# Three possible instrument setups
data = {}
mode = 'HR'
data.update({mode:populate_data(mode,36)})
mode = 'therm'
data.update({mode:populate_data(mode,36)})
mode = 'cold'
data.update({mode:populate_data(mode,36)})

#%% Compute maps from xyz data
# Switch from xyz list to 2D map
maps = {}
# Loop over the different instrument setup
for k in data.keys():
    # Define map step in hkl space
    delta = 0.1
    # Define maximum h and k value for the map
    qamax=10
    qbmax=10
    # Generate the x and y axis
    qa=arange(-qamax,qamax,delta)
    qb=arange(-qbmax,qbmax,delta)

    pos1 = 0
    # Initialize an empty map
    maps_temp = zeros([len(qa), len(qb)])
    # Loop over all "h" value
    for i in qa:
        # Select only the relevant "h" (in the delta bin)
        dt = data[k][abs(data[k][:,0]-i)<=delta/2,:]
        # Rebin the selected data onto the "k" value space
        test = histogram1d(dt[:,1], bins=len(qb), range=[qb.min(), qb.max()], weights=dt[:,2])
        # Fill one line of the map
        maps_temp[pos1,:] = test
        # Rince and repeat
        pos1 += 1

    # Add the calculated map to the dictionnary
    maps.update({k:maps_temp})

#%% Display maps and export to pdf
try:
    # If bg has been calculated (when using spyder) delete it
    del(bg)
except:
    pass

# Loop over all instrument setup maps
for k in maps.keys():
    maps_temp=maps[k]
    try:
        len(bg)
    except:
        # Compute fake bg from mean intensity and random noise
        bg = mean(maps_temp)*0.25*random.rand(len(qa), len(qb))
        bg += mean(maps_temp)

    # Display the bg + data maps
    matshow(maps_temp+bg, extent=[-qbmax, qbmax, qamax, -qamax], vmin=0, vmax=mean(bg+maps_temp)*10,
            cmap='Greys', interpolation='bicubic')
    xlim([-10,10])
    ylim([-10,10])
    ylabel('K')
    xlabel('H')
    title('C60 HK0 plane -- '+k+' beam')
    savefig('C60_'+k+'.pdf', bbox_inches='tight')