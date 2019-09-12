number_of_blades = 200
base_priority = 550

fp = open("Collimator_channels.c","w")

# for channels
# Arm center channel
# Al box
# Vacuum
#   for blades
#     place blades

number_of_channels = 9
blades_per_channel = 20 #(this can be changed from McStas inputs)
base_priority_channels = 550
base_priority_blades = 1000

for channel in range (0,number_of_channels):
    fp.write("COMPONENT Channel_" + str(channel) + "_arm = Arm()\n")
    fp.write("AT (0,0,0) RELATIVE filter_direction\n")
    fp.write("ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(" + str(channel) + "+0.5),0) RELATIVE filter_direction\n")
    fp.write("\n")
    
    fp.write("COMPONENT Channel_" + str(channel) + "_Al = Union_box(\n")
    fp.write("xwidth =Filter_channel_start_width,\n")
    fp.write("xwidth2=Filter_channel_end_width,\n")
    fp.write("yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,\n")
    fp.write("zdepth=Filter_channel_length,\n")
    fp.write("priority=" + str(base_priority_channels) + ",material_string=\"Al\")")
    base_priority_channels+=1
    fp.write("AT (0,0,Channel_center_radius) RELATIVE Channel_" + str(channel) + "_arm\n")
    fp.write("\n")
    
    fp.write("COMPONENT Channel_" + str(channel) + "_absorbing_coating = Union_box(\n")
    fp.write("xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,\n")
    fp.write("xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,\n")
    fp.write("yheight=Filter_channel_height+5.0*Small_distance,\n")
    fp.write("zdepth=Filter_channel_length-Small_distance,\n")
    fp.write("priority=" + str(base_priority_channels) + ",material_string=\"Cd\")")
    base_priority_channels+=1
    fp.write("AT (0,0,Channel_center_radius) RELATIVE Channel_" + str(channel) + "_arm\n")
    fp.write("\n")
    
    fp.write("COMPONENT Channel_" + str(channel) + "_Vacuum = Union_box(\n")
    fp.write("xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,\n")
    fp.write("xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,\n")
    fp.write("yheight=Filter_channel_height+4.0*Small_distance,\n")
    fp.write("zdepth=Filter_channel_length+0.004,\n")
    fp.write("priority=" + str(base_priority_channels) + ",material_string=\"Vacuum\")")
    base_priority_channels+=1
    fp.write("AT (0,0,Channel_center_radius) RELATIVE Channel_" + str(channel) + "_arm\n")
    fp.write("\n")
    
    fp.write("COMPONENT Channel_" + str(channel) + "_Be_mask = Union_box(\n")
    fp.write("xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,\n")
    fp.write("xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,\n")
    fp.write("yheight=Filter_channel_height+3.0*Small_distance,\n")
    fp.write("zdepth=Filter_channel_length-2.0*Small_distance,\n")
    fp.write("priority=" + str(base_priority_channels) + ",mask_string=\"Filter_Be_wedge,Filter_Be_wedge_vacuum\",")
    base_priority_channels+=1
    fp.write("number_of_activations=Enable_filter_wedges,mask_setting=\"ANY\")\n")
    fp.write("AT (0,0,Channel_center_radius) RELATIVE Channel_" + str(channel) + "_arm\n")
    fp.write("\n")
    
    for iterate in range (0,blades_per_channel):
        fp.write("COMPONENT absorbing_blade_channel_" + str(channel) + "_blade_" + str(iterate) + "= Union_box(\n")
        fp.write("xwidth=Filter_absorbing_blade_width,\n")
        fp.write("yheight=Filter_channel_height+2.0*Small_distance,\n")
        fp.write("zdepth=Filter_absorbing_blade_length,\n")
        fp.write("priority=" + str(base_priority_blades) + ",material_string=\"Cd\",")
        base_priority_blades+=1
        fp.write("number_of_activations=Colimator_blade_activation_per_channel[" + str(iterate) + "],p_interact=0.1)\n")
        fp.write("AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*" + str(iterate+1) + ")),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*" + str(iterate+1) + "))) RELATIVE Channel_" + str(channel) + "_arm\n")
        fp.write("ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*" + str(iterate+1) + ",0) RELATIVE Channel_" + str(channel) + "_arm\n\n")


# New parameters
# I Filter_channel_angular_separation
# C Filter_channel_start_width
# C Filter_channel_end_width
# I Filter_channel_length
# I Al_channel_width
# I Channel_front_offset
# C Channel_center_radius
# I Channel_inner_angle
# C Channel_half_angle

















