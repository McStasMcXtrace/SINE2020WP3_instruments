COMPONENT Channel_0_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(0+0.5),0) RELATIVE filter_direction

COMPONENT Channel_0_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=550,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_0_arm

COMPONENT Channel_0_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=551,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_0_arm

COMPONENT Channel_0_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=552,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_0_arm

COMPONENT Channel_0_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=553,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1000,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1001,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1002,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1003,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1004,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1005,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1006,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1007,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1008,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1009,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1010,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1011,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1012,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1013,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1014,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1015,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1016,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1017,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1018,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_0_arm

COMPONENT absorbing_blade_channel_0_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1019,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_0_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_0_arm

COMPONENT Channel_1_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(1+0.5),0) RELATIVE filter_direction

COMPONENT Channel_1_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=554,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_1_arm

COMPONENT Channel_1_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=555,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_1_arm

COMPONENT Channel_1_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=556,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_1_arm

COMPONENT Channel_1_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=557,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1020,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1021,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1022,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1023,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1024,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1025,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1026,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1027,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1028,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1029,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1030,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1031,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1032,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1033,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1034,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1035,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1036,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1037,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1038,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_1_arm

COMPONENT absorbing_blade_channel_1_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1039,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_1_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_1_arm

COMPONENT Channel_2_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(2+0.5),0) RELATIVE filter_direction

COMPONENT Channel_2_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=558,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_2_arm

COMPONENT Channel_2_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=559,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_2_arm

COMPONENT Channel_2_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=560,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_2_arm

COMPONENT Channel_2_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=561,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1040,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1041,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1042,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1043,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1044,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1045,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1046,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1047,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1048,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1049,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1050,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1051,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1052,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1053,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1054,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1055,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1056,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1057,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1058,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_2_arm

COMPONENT absorbing_blade_channel_2_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1059,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_2_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_2_arm

COMPONENT Channel_3_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(3+0.5),0) RELATIVE filter_direction

COMPONENT Channel_3_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=562,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_3_arm

COMPONENT Channel_3_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=563,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_3_arm

COMPONENT Channel_3_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=564,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_3_arm

COMPONENT Channel_3_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=565,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1060,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1061,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1062,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1063,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1064,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1065,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1066,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1067,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1068,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1069,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1070,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1071,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1072,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1073,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1074,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1075,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1076,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1077,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1078,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_3_arm

COMPONENT absorbing_blade_channel_3_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1079,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_3_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_3_arm

COMPONENT Channel_4_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(4+0.5),0) RELATIVE filter_direction

COMPONENT Channel_4_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=566,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_4_arm

COMPONENT Channel_4_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=567,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_4_arm

COMPONENT Channel_4_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=568,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_4_arm

COMPONENT Channel_4_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=569,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1080,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1081,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1082,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1083,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1084,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1085,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1086,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1087,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1088,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1089,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1090,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1091,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1092,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1093,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1094,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1095,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1096,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1097,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1098,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_4_arm

COMPONENT absorbing_blade_channel_4_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1099,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_4_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_4_arm

COMPONENT Channel_5_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(5+0.5),0) RELATIVE filter_direction

COMPONENT Channel_5_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=570,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_5_arm

COMPONENT Channel_5_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=571,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_5_arm

COMPONENT Channel_5_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=572,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_5_arm

COMPONENT Channel_5_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=573,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1100,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1101,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1102,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1103,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1104,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1105,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1106,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1107,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1108,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1109,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1110,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1111,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1112,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1113,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1114,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1115,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1116,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1117,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1118,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_5_arm

COMPONENT absorbing_blade_channel_5_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1119,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_5_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_5_arm

COMPONENT Channel_6_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(6+0.5),0) RELATIVE filter_direction

COMPONENT Channel_6_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=574,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_6_arm

COMPONENT Channel_6_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=575,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_6_arm

COMPONENT Channel_6_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=576,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_6_arm

COMPONENT Channel_6_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=577,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1120,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1121,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1122,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1123,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1124,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1125,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1126,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1127,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1128,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1129,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1130,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1131,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1132,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1133,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1134,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1135,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1136,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1137,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1138,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_6_arm

COMPONENT absorbing_blade_channel_6_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1139,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_6_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_6_arm

COMPONENT Channel_7_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(7+0.5),0) RELATIVE filter_direction

COMPONENT Channel_7_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=578,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_7_arm

COMPONENT Channel_7_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=579,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_7_arm

COMPONENT Channel_7_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=580,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_7_arm

COMPONENT Channel_7_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=581,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1140,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1141,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1142,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1143,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1144,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1145,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1146,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1147,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1148,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1149,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1150,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1151,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1152,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1153,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1154,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1155,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1156,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1157,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1158,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_7_arm

COMPONENT absorbing_blade_channel_7_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1159,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_7_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_7_arm

COMPONENT Channel_8_arm = Arm()
AT (0,0,0) RELATIVE filter_direction
ROTATED (0,-Filter_half_total_channel_angle+Filter_channel_angular_separation*(8+0.5),0) RELATIVE filter_direction

COMPONENT Channel_8_Al = Union_box(
xwidth =Filter_channel_start_width,
xwidth2=Filter_channel_end_width,
yheight=Filter_channel_height+2.0*Al_channel_width+Small_distance+Filter_absorbing_blade_width,
zdepth=Filter_channel_length,
priority=582,material_string="Al")AT (0,0,Channel_center_radius) RELATIVE Channel_8_arm

COMPONENT Channel_8_absorbing_coating = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width+0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+5.0*Small_distance,
zdepth=Filter_channel_length-Small_distance,
priority=583,material_string="Cd")AT (0,0,Channel_center_radius) RELATIVE Channel_8_arm

COMPONENT Channel_8_Vacuum = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width,
yheight=Filter_channel_height+4.0*Small_distance,
zdepth=Filter_channel_length+0.004,
priority=584,material_string="Vacuum")AT (0,0,Channel_center_radius) RELATIVE Channel_8_arm

COMPONENT Channel_8_Be_mask = Union_box(
xwidth =Filter_channel_start_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
xwidth2=Filter_channel_end_width-2.0*Al_channel_width-0.5*Filter_absorbing_blade_width-Small_distance,
yheight=Filter_channel_height+3.0*Small_distance,
zdepth=Filter_channel_length-2.0*Small_distance,
priority=585,mask_string="Filter_Be_wedge,Filter_Be_wedge_vacuum",number_of_activations=Enable_filter_wedges,mask_setting="ANY")
AT (0,0,Channel_center_radius) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_0= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1160,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[0],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*1))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*1,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_1= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1161,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[1],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*2))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*2,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_2= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1162,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[2],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*3))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*3,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_3= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1163,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[3],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*4))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*4,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_4= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1164,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[4],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*5))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*5,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_5= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1165,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[5],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*6))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*6,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_6= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1166,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[6],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*7))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*7,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_7= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1167,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[7],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*8))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*8,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_8= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1168,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[8],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*9))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*9,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_9= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1169,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[9],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*10))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*10,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_10= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1170,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[10],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*11))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*11,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_11= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1171,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[11],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*12))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*12,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_12= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1172,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[12],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*13))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*13,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_13= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1173,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[13],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*14))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*14,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_14= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1174,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[14],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*15))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*15,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_15= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1175,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[15],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*16))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*16,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_16= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1176,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[16],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*17))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*17,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_17= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1177,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[17],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*18))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*18,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_18= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1178,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[18],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*19))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*19,0) RELATIVE Channel_8_arm

COMPONENT absorbing_blade_channel_8_blade_19= Union_box(
xwidth=Filter_absorbing_blade_width,
yheight=Filter_channel_height+2.0*Small_distance,
zdepth=Filter_absorbing_blade_length,
priority=1179,material_string="Cd",number_of_activations=Colimator_blade_activation_per_channel[19],p_interact=0.1)
AT (Channel_center_radius*sin(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20)),0,Channel_center_radius*cos(DEG2RAD*(-Channel_half_inner_angle+Filter_blade_angular_separation*20))) RELATIVE Channel_8_arm
ROTATED (0,-Channel_half_inner_angle+Filter_blade_angular_separation*20,0) RELATIVE Channel_8_arm

