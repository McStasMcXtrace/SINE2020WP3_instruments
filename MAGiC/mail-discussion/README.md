<pre>
Dear Peter,
 
Here is a first wave of answers to the MAGiC_PSD comments and so on.
 
MAGiC_PSD.comp
Line 100: if atan2 gives you the angle between the direct beam (along the local z axis) and the diffused beam then yes, this is a complicated way of doing atan2 😊
Line 113: The intersect/PROP_DT/get coordinate solution is the proper mcstas way of doing things. In the original file it was just a quick and dirty solution knowing that no components would come after the detector.
Line 132: we have a binning in 2 angles (gamma the in plane angle and nu the out of plane angle) and time.
Line 162: these calculations are used to properly account for the choppers setup. In particular, in high resolution mode only the last 200 micro seconds of the 0.6 A neutrons are used. The center of gravity of these neutrons is therefore not the pulse center of gravity. It has to be corrected to properly calculate the wavelength based on the TOF at the detector position. So:
otime=otime+1430.0 => recenter the t0 to the center of gravity of the neutron pulse.
olambda is then directly computed from the corrected TOF
in the second case, the center of gravity of the pulse is lambda dependent as we make use of the pulse shaping chopper. The shortest pulse length is of 200 microseconds for lambda=0.6A and 3860 microseconds for lambda=2.3A.
Line 171: correct, the effect of the PSC is now included.
Line 175: gamma is the inplane angle.
Line 181: we sum everything vertically. This is an approximation of MAGiC allowing to directly convert the information into a single hkl map. In reality, the detector will be 48° vertically which will create a 3D hkl-space. For the purpose of this training I guess simplicity is the key.
Line 188: yes a-param is the lattice constant. This hkl space conversion only works for cubic systems. I propose to use Ni, C60 and Fe3O4 for which I can give the F2.
Line 190: correct, I did not see this possible optimization 😊
 
Reduction.py: I added comments in the file. Let me know if this is ok with you 😊
 
Science case: I used C60 as an example because this is the easiest way to generate data that are directly usable. The instrument will use only polarized neutrons. But introducing polarized neutrons and simulating a relevant scientific case will require a lot of work:
Generate the F2 for both Sup and Sdown: this is done for Fe3O4
Simulate both cases
Define Flipping Ratio by dividing Sup/Sdown
Correct the flipping ratios based on polarization matrix and UB matrix to properly project the polarization (we use the CCSL to do so)
Use a maximum entropy code (such as MEND) to compute the spin density
Display the VESPA compatible generated output for the student to slice through it and rotate.
 
This is complicated, in particular for the CCSL/MEND/VESPA thing.
My idea was to provide 3 samples, with different lattice parameters to let the student play with the instrument configuration and either use intuition to define the best one or follow the “quizz” to properly calculate the instrument resolution, the Q-space you can access and the corresponding hkl you can measure. Then based on resolution one configuration is immediately better than the other. So the steps would be:
 
Define the three instrument configuration with their associated fluxes
Define resolution and let the student extract 0.6A and 2A lambda resolution: is the resolution lambda dependent ? Is it better at short wavelength ?
Select one sample
Calculate the minimum d-space you can access
Convert it to hkl
Based on resolution and flux: select the appropriate instrument configuration
Launch the simulation
Standard
Play with the collimation (the coll_set parameters. Possible values are 0.3, 0.2 and 0.1°)
Discuss results and instrument flexibility
 
Does this sound good to you ?
 
Cheers,
 
Xavier
----------------------------------------------------------------
MAGiC@ESS lead scientist
Laboratoire Léon Brillouin
CEA Saclay, Bat. 563
91191 Gif-sur-Yvette
tel: +33 (0)1.69.08.60.09
Hakuna Matata
 
 
From: Peter Kjær Willendrup <pkwi@fysik.dtu.dk>
Date: Thursday 12 September 2019 at 12:29
To: FABREGES Xavier <Xavier.Fabreges@cea.fr>
Cc: Linda Udby <udby@nbi.dk>
Subject: MAGiC for e-learning, science case etc.
 
We have had a look at your instrument in detail, it is now uploaded at https://github.com/McStasMcXtrace/SINE2020WP3_instruments/tree/master/MAGiC.
 
We have a number of questions that we have put in context in the PSD_MAGiC component file, see https://github.com/McStasMcXtrace/SINE2020WP3_instruments/commit/92248ec52cff796d0241190e0a8058f75de17016 (you can directly download the full file at https://raw.githubusercontent.com/McStasMcXtrace/SINE2020WP3_instruments/master/MAGiC/PSD_MAGiC.comp)
 
It is clear that to run optimally in an e-learning setting, the instrument and infrastructure around would have to be optimised a bit - I am already on that track, but need your input!
 
 Furthermore we need you to provide e.g. "five easy steps” of a standard experiment that we could condensate to quiz questions in connection with the simulation, ala
* Adjust wavelength
* Check that your hit the sample etc.
* See what happens when you blah
* Discuss normalisation 
* Perform a scan
 
- The above are of course just examples - you are the expert here and should know what is relevant to discuss / monitor. :-)
 
The reduction part would have to be handled via iFitlab which I can demonstrate to you in a Skype, but a good help would be a commented version of your python reduction script. I.e. explain every step of the procedure in comments please.
 
Regarding the sample, you have used C60. Is that a relevant science case for the instrument when built? (Why?) Also, the initial thought was to do polarised simulations - is there any relevance in the simulation for that part of the science case?
 
- Any “popular” discussion of the instrument and science case that you have produced already for another purpose would come in very handy…
 

Best
 
Linda and Peter
</pre>
