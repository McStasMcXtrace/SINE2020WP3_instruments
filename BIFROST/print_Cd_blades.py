number_of_blades = 200
base_priority = 550

fp = open("Cd_blades.c","w")

for iterate in range (0,number_of_blades):
    fp.write("COMPONENT Cd_blade_" + str(iterate) + "= Union_box(\n")
    fp.write("xwidth=Filter_Cd_blade_width,\n")
    fp.write("yheight=Filter_channel_height-Small_distance,\n")
    fp.write("zdepth=Filter_Cd_blade_length,\n")
    fp.write("priority=" + str(base_priority+iterate) + ",material_string=\"Cd\",")
    fp.write("number_of_activations=Colimator_blade_activation[" + str(iterate) + "],p_interact=0.1)\n")
    fp.write("AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*" + str(iterate) + ")),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*" + str(iterate) + "))) RELATIVE filter_direction\n")
    fp.write("ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*" + str(iterate) + ",0) RELATIVE filter_direction\n\n")
