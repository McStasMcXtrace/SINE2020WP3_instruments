#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 11 14:08:31 2019

@author: xav
"""

#%%
from matplotlib.pyplot import *
from scipy import *
from fast_histogram import histogram1d

def read_data(filename):
    data=[]
    with open(filename,'r') as fid:
        for line in fid:
            tt = line.split()
            try:
                if len(tt) == 4 and abs(float(tt[1]))<40 and abs(float(tt[2]))<40:
                    data.append([float(tt[0]),float(tt[1]),float(tt[2]),float(tt[3])])
            except:
                pass
    return(asarray(data))

def populate_data(mode, size):
    temp = read_data('MAGiC_'+mode+'/0/TOF_events.txt')
    for i in range(1,size):
        data_temp = read_data('MAGiC_'+mode+'/'+str(i)+'/TOF_events.txt')
        if len(data_temp) >0:
            temp = vstack((data_temp,temp))

    return(temp)

#%% Extract data from mcstas simulation
#data = {}
mode = 'HR'
data.update({mode:populate_data(mode,36)})
mode = 'therm'
data.update({mode:populate_data(mode,36)})
mode = 'cold'
#data.update({mode:populate_data(mode,36)})

#%% Compute maps from xyz data
import time
t0 = time.time()

maps = {}
for k in data.keys():
    delta = 0.1
    qamax=10
    qbmax=10
    qa=arange(-qamax,qamax,delta)
    qb=arange(-qbmax,qbmax,delta)

    pos1 = 0
    maps_temp = zeros([len(qa), len(qb)])
    for i in qa:
        dt = data[k][abs(data[k][:,1]-i)<=delta/2,:]
        test = histogram1d(dt[:,2], bins=len(qb), range=[qb.min(), qb.max()], weights=dt[:,3])
        maps_temp[pos1,:] = test
        pos1 += 1

    maps.update({k:maps_temp})

t1 = time.time()
print('Elapsed time: %6.2f seconds' % (t1-t0,))

#%% Compute maps from xyz data numba version
from numba import jit, float64
import numpy as np

@jit
def maps_generator(arr):
    delta=0.2
    qmax=10
    qa=np.arange(-qmax,qmax,delta)
    qb=np.arange(-qmax,qmax,delta)

    pos1 = 0
    maps_temp = np.zeros([len(qa), len(qb)])
    for i in qa:
        dt = arr[np.abs(arr[:,1]-i)<=delta/2,:]
        pos2 = 0
        for j in qb:
            dt2 = dt[np.abs(dt[:,2]-j)<=delta/2,:]
            maps_temp[pos1,pos2] = np.sum(dt2[:,3])
            pos2 += 1

        pos1 += 1

    return(maps_temp)

import time
t0 = time.time()

maps = {}
for k in data.keys():
    maps.update({k:maps_generator(data[k])})

t1 = time.time()
print('Elapsed time: %6.2f seconds' % (t1-t0,))

#%% Display maps and export to pdf
try:
    del(bg)
except:
    pass

for k in maps.keys():
    maps_temp=maps[k]
    try:
        len(bg)
    except:
        bg = mean(maps_temp)*0.25*random.rand(len(qa), len(qb))
        bg += mean(maps_temp)

    matshow(maps_temp+bg, extent=[-qbmax, qbmax, qamax, -qamax], vmin=0, vmax=mean(bg+maps_temp)*10,
            cmap='Greys', interpolation='bicubic')
    xlim([-10,10])
    ylim([-10,10])
    ylabel('K')
    xlabel('H')
    title('C60 HK0 plane -- '+k+' beam')
    savefig('C60_'+k+'.pdf', bbox_inches='tight')