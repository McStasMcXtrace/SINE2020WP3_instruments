number_of_blades = 200
base_priority = 550

fp = open("Cd_blades.c","w")

for iterate in range (0,number_of_blades):
    fp.write("COMPONENT Cd_blade_" + str(iterate) + "_arm = Arm()\n")
    fp.write("AT (0,0,0) RELATIVE backend_center_direction\n")
    fp.write("ROTATED (0,-45+Filter_collimation_angular_sep*" + str(iterate) + " ,0) RELATIVE backend_center_direction\n\n")

    fp.write("COMPONENT Cd_blade_" + str(iterate))
    fp.write("= Union_box(xwidth=0.001,yheight=0.187,zdepth=Filter_Collimator_length,")
    fp.write("priority=" + str(base_priority+iterate) + ",material_string=\"Cd\",")
    fp.write("number_of_activations=Colimator_blade_activation[" + str(iterate) + "],p_interact=0.1)\n")
    fp.write("AT (0,0,Filter_Be_outer_radius-0.5*Filter_Collimator_length+0.003) RELATIVE Cd_blade_" + str(iterate) + "_arm\n")
    fp.write("ROTATED (0,0,0) RELATIVE Cd_blade_" + str(iterate) + "_arm\n\n")
