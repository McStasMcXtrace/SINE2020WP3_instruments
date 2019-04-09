COMPONENT Cd_blade_0= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=550,material_string="Cd",number_of_activations=Colimator_blade_activation[0],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*0)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*0))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*0,0) RELATIVE filter_direction

COMPONENT Cd_blade_1= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=551,material_string="Cd",number_of_activations=Colimator_blade_activation[1],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*1)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*1))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*1,0) RELATIVE filter_direction

COMPONENT Cd_blade_2= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=552,material_string="Cd",number_of_activations=Colimator_blade_activation[2],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*2)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*2))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*2,0) RELATIVE filter_direction

COMPONENT Cd_blade_3= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=553,material_string="Cd",number_of_activations=Colimator_blade_activation[3],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*3)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*3))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*3,0) RELATIVE filter_direction

COMPONENT Cd_blade_4= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=554,material_string="Cd",number_of_activations=Colimator_blade_activation[4],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*4)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*4))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*4,0) RELATIVE filter_direction

COMPONENT Cd_blade_5= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=555,material_string="Cd",number_of_activations=Colimator_blade_activation[5],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*5)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*5))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*5,0) RELATIVE filter_direction

COMPONENT Cd_blade_6= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=556,material_string="Cd",number_of_activations=Colimator_blade_activation[6],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*6)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*6))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*6,0) RELATIVE filter_direction

COMPONENT Cd_blade_7= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=557,material_string="Cd",number_of_activations=Colimator_blade_activation[7],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*7)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*7))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*7,0) RELATIVE filter_direction

COMPONENT Cd_blade_8= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=558,material_string="Cd",number_of_activations=Colimator_blade_activation[8],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*8)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*8))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*8,0) RELATIVE filter_direction

COMPONENT Cd_blade_9= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=559,material_string="Cd",number_of_activations=Colimator_blade_activation[9],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*9)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*9))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*9,0) RELATIVE filter_direction

COMPONENT Cd_blade_10= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=560,material_string="Cd",number_of_activations=Colimator_blade_activation[10],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*10)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*10))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*10,0) RELATIVE filter_direction

COMPONENT Cd_blade_11= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=561,material_string="Cd",number_of_activations=Colimator_blade_activation[11],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*11)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*11))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*11,0) RELATIVE filter_direction

COMPONENT Cd_blade_12= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=562,material_string="Cd",number_of_activations=Colimator_blade_activation[12],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*12)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*12))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*12,0) RELATIVE filter_direction

COMPONENT Cd_blade_13= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=563,material_string="Cd",number_of_activations=Colimator_blade_activation[13],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*13)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*13))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*13,0) RELATIVE filter_direction

COMPONENT Cd_blade_14= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=564,material_string="Cd",number_of_activations=Colimator_blade_activation[14],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*14)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*14))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*14,0) RELATIVE filter_direction

COMPONENT Cd_blade_15= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=565,material_string="Cd",number_of_activations=Colimator_blade_activation[15],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*15)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*15))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*15,0) RELATIVE filter_direction

COMPONENT Cd_blade_16= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=566,material_string="Cd",number_of_activations=Colimator_blade_activation[16],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*16)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*16))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*16,0) RELATIVE filter_direction

COMPONENT Cd_blade_17= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=567,material_string="Cd",number_of_activations=Colimator_blade_activation[17],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*17)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*17))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*17,0) RELATIVE filter_direction

COMPONENT Cd_blade_18= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=568,material_string="Cd",number_of_activations=Colimator_blade_activation[18],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*18)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*18))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*18,0) RELATIVE filter_direction

COMPONENT Cd_blade_19= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=569,material_string="Cd",number_of_activations=Colimator_blade_activation[19],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*19)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*19))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*19,0) RELATIVE filter_direction

COMPONENT Cd_blade_20= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=570,material_string="Cd",number_of_activations=Colimator_blade_activation[20],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*20)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*20))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*20,0) RELATIVE filter_direction

COMPONENT Cd_blade_21= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=571,material_string="Cd",number_of_activations=Colimator_blade_activation[21],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*21)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*21))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*21,0) RELATIVE filter_direction

COMPONENT Cd_blade_22= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=572,material_string="Cd",number_of_activations=Colimator_blade_activation[22],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*22)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*22))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*22,0) RELATIVE filter_direction

COMPONENT Cd_blade_23= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=573,material_string="Cd",number_of_activations=Colimator_blade_activation[23],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*23)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*23))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*23,0) RELATIVE filter_direction

COMPONENT Cd_blade_24= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=574,material_string="Cd",number_of_activations=Colimator_blade_activation[24],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*24)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*24))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*24,0) RELATIVE filter_direction

COMPONENT Cd_blade_25= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=575,material_string="Cd",number_of_activations=Colimator_blade_activation[25],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*25)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*25))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*25,0) RELATIVE filter_direction

COMPONENT Cd_blade_26= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=576,material_string="Cd",number_of_activations=Colimator_blade_activation[26],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*26)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*26))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*26,0) RELATIVE filter_direction

COMPONENT Cd_blade_27= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=577,material_string="Cd",number_of_activations=Colimator_blade_activation[27],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*27)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*27))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*27,0) RELATIVE filter_direction

COMPONENT Cd_blade_28= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=578,material_string="Cd",number_of_activations=Colimator_blade_activation[28],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*28)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*28))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*28,0) RELATIVE filter_direction

COMPONENT Cd_blade_29= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=579,material_string="Cd",number_of_activations=Colimator_blade_activation[29],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*29)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*29))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*29,0) RELATIVE filter_direction

COMPONENT Cd_blade_30= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=580,material_string="Cd",number_of_activations=Colimator_blade_activation[30],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*30)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*30))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*30,0) RELATIVE filter_direction

COMPONENT Cd_blade_31= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=581,material_string="Cd",number_of_activations=Colimator_blade_activation[31],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*31)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*31))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*31,0) RELATIVE filter_direction

COMPONENT Cd_blade_32= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=582,material_string="Cd",number_of_activations=Colimator_blade_activation[32],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*32)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*32))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*32,0) RELATIVE filter_direction

COMPONENT Cd_blade_33= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=583,material_string="Cd",number_of_activations=Colimator_blade_activation[33],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*33)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*33))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*33,0) RELATIVE filter_direction

COMPONENT Cd_blade_34= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=584,material_string="Cd",number_of_activations=Colimator_blade_activation[34],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*34)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*34))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*34,0) RELATIVE filter_direction

COMPONENT Cd_blade_35= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=585,material_string="Cd",number_of_activations=Colimator_blade_activation[35],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*35)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*35))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*35,0) RELATIVE filter_direction

COMPONENT Cd_blade_36= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=586,material_string="Cd",number_of_activations=Colimator_blade_activation[36],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*36)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*36))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*36,0) RELATIVE filter_direction

COMPONENT Cd_blade_37= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=587,material_string="Cd",number_of_activations=Colimator_blade_activation[37],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*37)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*37))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*37,0) RELATIVE filter_direction

COMPONENT Cd_blade_38= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=588,material_string="Cd",number_of_activations=Colimator_blade_activation[38],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*38)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*38))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*38,0) RELATIVE filter_direction

COMPONENT Cd_blade_39= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=589,material_string="Cd",number_of_activations=Colimator_blade_activation[39],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*39)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*39))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*39,0) RELATIVE filter_direction

COMPONENT Cd_blade_40= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=590,material_string="Cd",number_of_activations=Colimator_blade_activation[40],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*40)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*40))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*40,0) RELATIVE filter_direction

COMPONENT Cd_blade_41= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=591,material_string="Cd",number_of_activations=Colimator_blade_activation[41],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*41)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*41))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*41,0) RELATIVE filter_direction

COMPONENT Cd_blade_42= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=592,material_string="Cd",number_of_activations=Colimator_blade_activation[42],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*42)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*42))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*42,0) RELATIVE filter_direction

COMPONENT Cd_blade_43= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=593,material_string="Cd",number_of_activations=Colimator_blade_activation[43],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*43)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*43))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*43,0) RELATIVE filter_direction

COMPONENT Cd_blade_44= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=594,material_string="Cd",number_of_activations=Colimator_blade_activation[44],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*44)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*44))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*44,0) RELATIVE filter_direction

COMPONENT Cd_blade_45= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=595,material_string="Cd",number_of_activations=Colimator_blade_activation[45],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*45)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*45))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*45,0) RELATIVE filter_direction

COMPONENT Cd_blade_46= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=596,material_string="Cd",number_of_activations=Colimator_blade_activation[46],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*46)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*46))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*46,0) RELATIVE filter_direction

COMPONENT Cd_blade_47= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=597,material_string="Cd",number_of_activations=Colimator_blade_activation[47],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*47)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*47))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*47,0) RELATIVE filter_direction

COMPONENT Cd_blade_48= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=598,material_string="Cd",number_of_activations=Colimator_blade_activation[48],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*48)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*48))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*48,0) RELATIVE filter_direction

COMPONENT Cd_blade_49= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=599,material_string="Cd",number_of_activations=Colimator_blade_activation[49],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*49)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*49))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*49,0) RELATIVE filter_direction

COMPONENT Cd_blade_50= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=600,material_string="Cd",number_of_activations=Colimator_blade_activation[50],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*50)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*50))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*50,0) RELATIVE filter_direction

COMPONENT Cd_blade_51= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=601,material_string="Cd",number_of_activations=Colimator_blade_activation[51],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*51)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*51))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*51,0) RELATIVE filter_direction

COMPONENT Cd_blade_52= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=602,material_string="Cd",number_of_activations=Colimator_blade_activation[52],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*52)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*52))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*52,0) RELATIVE filter_direction

COMPONENT Cd_blade_53= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=603,material_string="Cd",number_of_activations=Colimator_blade_activation[53],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*53)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*53))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*53,0) RELATIVE filter_direction

COMPONENT Cd_blade_54= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=604,material_string="Cd",number_of_activations=Colimator_blade_activation[54],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*54)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*54))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*54,0) RELATIVE filter_direction

COMPONENT Cd_blade_55= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=605,material_string="Cd",number_of_activations=Colimator_blade_activation[55],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*55)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*55))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*55,0) RELATIVE filter_direction

COMPONENT Cd_blade_56= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=606,material_string="Cd",number_of_activations=Colimator_blade_activation[56],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*56)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*56))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*56,0) RELATIVE filter_direction

COMPONENT Cd_blade_57= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=607,material_string="Cd",number_of_activations=Colimator_blade_activation[57],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*57)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*57))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*57,0) RELATIVE filter_direction

COMPONENT Cd_blade_58= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=608,material_string="Cd",number_of_activations=Colimator_blade_activation[58],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*58)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*58))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*58,0) RELATIVE filter_direction

COMPONENT Cd_blade_59= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=609,material_string="Cd",number_of_activations=Colimator_blade_activation[59],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*59)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*59))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*59,0) RELATIVE filter_direction

COMPONENT Cd_blade_60= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=610,material_string="Cd",number_of_activations=Colimator_blade_activation[60],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*60)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*60))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*60,0) RELATIVE filter_direction

COMPONENT Cd_blade_61= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=611,material_string="Cd",number_of_activations=Colimator_blade_activation[61],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*61)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*61))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*61,0) RELATIVE filter_direction

COMPONENT Cd_blade_62= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=612,material_string="Cd",number_of_activations=Colimator_blade_activation[62],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*62)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*62))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*62,0) RELATIVE filter_direction

COMPONENT Cd_blade_63= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=613,material_string="Cd",number_of_activations=Colimator_blade_activation[63],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*63)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*63))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*63,0) RELATIVE filter_direction

COMPONENT Cd_blade_64= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=614,material_string="Cd",number_of_activations=Colimator_blade_activation[64],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*64)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*64))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*64,0) RELATIVE filter_direction

COMPONENT Cd_blade_65= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=615,material_string="Cd",number_of_activations=Colimator_blade_activation[65],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*65)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*65))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*65,0) RELATIVE filter_direction

COMPONENT Cd_blade_66= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=616,material_string="Cd",number_of_activations=Colimator_blade_activation[66],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*66)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*66))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*66,0) RELATIVE filter_direction

COMPONENT Cd_blade_67= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=617,material_string="Cd",number_of_activations=Colimator_blade_activation[67],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*67)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*67))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*67,0) RELATIVE filter_direction

COMPONENT Cd_blade_68= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=618,material_string="Cd",number_of_activations=Colimator_blade_activation[68],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*68)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*68))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*68,0) RELATIVE filter_direction

COMPONENT Cd_blade_69= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=619,material_string="Cd",number_of_activations=Colimator_blade_activation[69],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*69)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*69))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*69,0) RELATIVE filter_direction

COMPONENT Cd_blade_70= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=620,material_string="Cd",number_of_activations=Colimator_blade_activation[70],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*70)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*70))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*70,0) RELATIVE filter_direction

COMPONENT Cd_blade_71= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=621,material_string="Cd",number_of_activations=Colimator_blade_activation[71],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*71)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*71))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*71,0) RELATIVE filter_direction

COMPONENT Cd_blade_72= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=622,material_string="Cd",number_of_activations=Colimator_blade_activation[72],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*72)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*72))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*72,0) RELATIVE filter_direction

COMPONENT Cd_blade_73= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=623,material_string="Cd",number_of_activations=Colimator_blade_activation[73],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*73)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*73))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*73,0) RELATIVE filter_direction

COMPONENT Cd_blade_74= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=624,material_string="Cd",number_of_activations=Colimator_blade_activation[74],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*74)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*74))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*74,0) RELATIVE filter_direction

COMPONENT Cd_blade_75= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=625,material_string="Cd",number_of_activations=Colimator_blade_activation[75],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*75)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*75))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*75,0) RELATIVE filter_direction

COMPONENT Cd_blade_76= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=626,material_string="Cd",number_of_activations=Colimator_blade_activation[76],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*76)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*76))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*76,0) RELATIVE filter_direction

COMPONENT Cd_blade_77= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=627,material_string="Cd",number_of_activations=Colimator_blade_activation[77],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*77)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*77))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*77,0) RELATIVE filter_direction

COMPONENT Cd_blade_78= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=628,material_string="Cd",number_of_activations=Colimator_blade_activation[78],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*78)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*78))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*78,0) RELATIVE filter_direction

COMPONENT Cd_blade_79= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=629,material_string="Cd",number_of_activations=Colimator_blade_activation[79],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*79)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*79))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*79,0) RELATIVE filter_direction

COMPONENT Cd_blade_80= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=630,material_string="Cd",number_of_activations=Colimator_blade_activation[80],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*80)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*80))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*80,0) RELATIVE filter_direction

COMPONENT Cd_blade_81= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=631,material_string="Cd",number_of_activations=Colimator_blade_activation[81],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*81)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*81))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*81,0) RELATIVE filter_direction

COMPONENT Cd_blade_82= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=632,material_string="Cd",number_of_activations=Colimator_blade_activation[82],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*82)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*82))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*82,0) RELATIVE filter_direction

COMPONENT Cd_blade_83= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=633,material_string="Cd",number_of_activations=Colimator_blade_activation[83],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*83)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*83))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*83,0) RELATIVE filter_direction

COMPONENT Cd_blade_84= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=634,material_string="Cd",number_of_activations=Colimator_blade_activation[84],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*84)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*84))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*84,0) RELATIVE filter_direction

COMPONENT Cd_blade_85= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=635,material_string="Cd",number_of_activations=Colimator_blade_activation[85],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*85)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*85))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*85,0) RELATIVE filter_direction

COMPONENT Cd_blade_86= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=636,material_string="Cd",number_of_activations=Colimator_blade_activation[86],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*86)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*86))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*86,0) RELATIVE filter_direction

COMPONENT Cd_blade_87= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=637,material_string="Cd",number_of_activations=Colimator_blade_activation[87],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*87)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*87))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*87,0) RELATIVE filter_direction

COMPONENT Cd_blade_88= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=638,material_string="Cd",number_of_activations=Colimator_blade_activation[88],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*88)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*88))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*88,0) RELATIVE filter_direction

COMPONENT Cd_blade_89= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=639,material_string="Cd",number_of_activations=Colimator_blade_activation[89],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*89)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*89))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*89,0) RELATIVE filter_direction

COMPONENT Cd_blade_90= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=640,material_string="Cd",number_of_activations=Colimator_blade_activation[90],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*90)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*90))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*90,0) RELATIVE filter_direction

COMPONENT Cd_blade_91= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=641,material_string="Cd",number_of_activations=Colimator_blade_activation[91],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*91)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*91))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*91,0) RELATIVE filter_direction

COMPONENT Cd_blade_92= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=642,material_string="Cd",number_of_activations=Colimator_blade_activation[92],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*92)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*92))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*92,0) RELATIVE filter_direction

COMPONENT Cd_blade_93= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=643,material_string="Cd",number_of_activations=Colimator_blade_activation[93],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*93)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*93))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*93,0) RELATIVE filter_direction

COMPONENT Cd_blade_94= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=644,material_string="Cd",number_of_activations=Colimator_blade_activation[94],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*94)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*94))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*94,0) RELATIVE filter_direction

COMPONENT Cd_blade_95= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=645,material_string="Cd",number_of_activations=Colimator_blade_activation[95],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*95)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*95))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*95,0) RELATIVE filter_direction

COMPONENT Cd_blade_96= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=646,material_string="Cd",number_of_activations=Colimator_blade_activation[96],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*96)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*96))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*96,0) RELATIVE filter_direction

COMPONENT Cd_blade_97= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=647,material_string="Cd",number_of_activations=Colimator_blade_activation[97],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*97)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*97))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*97,0) RELATIVE filter_direction

COMPONENT Cd_blade_98= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=648,material_string="Cd",number_of_activations=Colimator_blade_activation[98],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*98)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*98))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*98,0) RELATIVE filter_direction

COMPONENT Cd_blade_99= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=649,material_string="Cd",number_of_activations=Colimator_blade_activation[99],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*99)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*99))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*99,0) RELATIVE filter_direction

COMPONENT Cd_blade_100= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=650,material_string="Cd",number_of_activations=Colimator_blade_activation[100],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*100)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*100))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*100,0) RELATIVE filter_direction

COMPONENT Cd_blade_101= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=651,material_string="Cd",number_of_activations=Colimator_blade_activation[101],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*101)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*101))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*101,0) RELATIVE filter_direction

COMPONENT Cd_blade_102= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=652,material_string="Cd",number_of_activations=Colimator_blade_activation[102],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*102)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*102))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*102,0) RELATIVE filter_direction

COMPONENT Cd_blade_103= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=653,material_string="Cd",number_of_activations=Colimator_blade_activation[103],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*103)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*103))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*103,0) RELATIVE filter_direction

COMPONENT Cd_blade_104= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=654,material_string="Cd",number_of_activations=Colimator_blade_activation[104],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*104)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*104))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*104,0) RELATIVE filter_direction

COMPONENT Cd_blade_105= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=655,material_string="Cd",number_of_activations=Colimator_blade_activation[105],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*105)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*105))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*105,0) RELATIVE filter_direction

COMPONENT Cd_blade_106= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=656,material_string="Cd",number_of_activations=Colimator_blade_activation[106],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*106)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*106))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*106,0) RELATIVE filter_direction

COMPONENT Cd_blade_107= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=657,material_string="Cd",number_of_activations=Colimator_blade_activation[107],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*107)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*107))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*107,0) RELATIVE filter_direction

COMPONENT Cd_blade_108= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=658,material_string="Cd",number_of_activations=Colimator_blade_activation[108],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*108)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*108))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*108,0) RELATIVE filter_direction

COMPONENT Cd_blade_109= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=659,material_string="Cd",number_of_activations=Colimator_blade_activation[109],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*109)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*109))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*109,0) RELATIVE filter_direction

COMPONENT Cd_blade_110= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=660,material_string="Cd",number_of_activations=Colimator_blade_activation[110],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*110)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*110))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*110,0) RELATIVE filter_direction

COMPONENT Cd_blade_111= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=661,material_string="Cd",number_of_activations=Colimator_blade_activation[111],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*111)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*111))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*111,0) RELATIVE filter_direction

COMPONENT Cd_blade_112= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=662,material_string="Cd",number_of_activations=Colimator_blade_activation[112],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*112)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*112))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*112,0) RELATIVE filter_direction

COMPONENT Cd_blade_113= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=663,material_string="Cd",number_of_activations=Colimator_blade_activation[113],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*113)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*113))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*113,0) RELATIVE filter_direction

COMPONENT Cd_blade_114= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=664,material_string="Cd",number_of_activations=Colimator_blade_activation[114],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*114)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*114))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*114,0) RELATIVE filter_direction

COMPONENT Cd_blade_115= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=665,material_string="Cd",number_of_activations=Colimator_blade_activation[115],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*115)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*115))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*115,0) RELATIVE filter_direction

COMPONENT Cd_blade_116= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=666,material_string="Cd",number_of_activations=Colimator_blade_activation[116],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*116)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*116))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*116,0) RELATIVE filter_direction

COMPONENT Cd_blade_117= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=667,material_string="Cd",number_of_activations=Colimator_blade_activation[117],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*117)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*117))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*117,0) RELATIVE filter_direction

COMPONENT Cd_blade_118= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=668,material_string="Cd",number_of_activations=Colimator_blade_activation[118],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*118)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*118))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*118,0) RELATIVE filter_direction

COMPONENT Cd_blade_119= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=669,material_string="Cd",number_of_activations=Colimator_blade_activation[119],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*119)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*119))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*119,0) RELATIVE filter_direction

COMPONENT Cd_blade_120= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=670,material_string="Cd",number_of_activations=Colimator_blade_activation[120],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*120)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*120))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*120,0) RELATIVE filter_direction

COMPONENT Cd_blade_121= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=671,material_string="Cd",number_of_activations=Colimator_blade_activation[121],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*121)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*121))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*121,0) RELATIVE filter_direction

COMPONENT Cd_blade_122= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=672,material_string="Cd",number_of_activations=Colimator_blade_activation[122],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*122)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*122))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*122,0) RELATIVE filter_direction

COMPONENT Cd_blade_123= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=673,material_string="Cd",number_of_activations=Colimator_blade_activation[123],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*123)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*123))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*123,0) RELATIVE filter_direction

COMPONENT Cd_blade_124= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=674,material_string="Cd",number_of_activations=Colimator_blade_activation[124],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*124)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*124))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*124,0) RELATIVE filter_direction

COMPONENT Cd_blade_125= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=675,material_string="Cd",number_of_activations=Colimator_blade_activation[125],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*125)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*125))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*125,0) RELATIVE filter_direction

COMPONENT Cd_blade_126= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=676,material_string="Cd",number_of_activations=Colimator_blade_activation[126],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*126)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*126))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*126,0) RELATIVE filter_direction

COMPONENT Cd_blade_127= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=677,material_string="Cd",number_of_activations=Colimator_blade_activation[127],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*127)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*127))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*127,0) RELATIVE filter_direction

COMPONENT Cd_blade_128= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=678,material_string="Cd",number_of_activations=Colimator_blade_activation[128],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*128)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*128))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*128,0) RELATIVE filter_direction

COMPONENT Cd_blade_129= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=679,material_string="Cd",number_of_activations=Colimator_blade_activation[129],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*129)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*129))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*129,0) RELATIVE filter_direction

COMPONENT Cd_blade_130= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=680,material_string="Cd",number_of_activations=Colimator_blade_activation[130],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*130)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*130))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*130,0) RELATIVE filter_direction

COMPONENT Cd_blade_131= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=681,material_string="Cd",number_of_activations=Colimator_blade_activation[131],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*131)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*131))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*131,0) RELATIVE filter_direction

COMPONENT Cd_blade_132= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=682,material_string="Cd",number_of_activations=Colimator_blade_activation[132],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*132)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*132))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*132,0) RELATIVE filter_direction

COMPONENT Cd_blade_133= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=683,material_string="Cd",number_of_activations=Colimator_blade_activation[133],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*133)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*133))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*133,0) RELATIVE filter_direction

COMPONENT Cd_blade_134= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=684,material_string="Cd",number_of_activations=Colimator_blade_activation[134],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*134)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*134))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*134,0) RELATIVE filter_direction

COMPONENT Cd_blade_135= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=685,material_string="Cd",number_of_activations=Colimator_blade_activation[135],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*135)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*135))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*135,0) RELATIVE filter_direction

COMPONENT Cd_blade_136= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=686,material_string="Cd",number_of_activations=Colimator_blade_activation[136],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*136)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*136))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*136,0) RELATIVE filter_direction

COMPONENT Cd_blade_137= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=687,material_string="Cd",number_of_activations=Colimator_blade_activation[137],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*137)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*137))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*137,0) RELATIVE filter_direction

COMPONENT Cd_blade_138= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=688,material_string="Cd",number_of_activations=Colimator_blade_activation[138],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*138)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*138))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*138,0) RELATIVE filter_direction

COMPONENT Cd_blade_139= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=689,material_string="Cd",number_of_activations=Colimator_blade_activation[139],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*139)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*139))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*139,0) RELATIVE filter_direction

COMPONENT Cd_blade_140= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=690,material_string="Cd",number_of_activations=Colimator_blade_activation[140],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*140)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*140))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*140,0) RELATIVE filter_direction

COMPONENT Cd_blade_141= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=691,material_string="Cd",number_of_activations=Colimator_blade_activation[141],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*141)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*141))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*141,0) RELATIVE filter_direction

COMPONENT Cd_blade_142= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=692,material_string="Cd",number_of_activations=Colimator_blade_activation[142],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*142)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*142))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*142,0) RELATIVE filter_direction

COMPONENT Cd_blade_143= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=693,material_string="Cd",number_of_activations=Colimator_blade_activation[143],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*143)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*143))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*143,0) RELATIVE filter_direction

COMPONENT Cd_blade_144= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=694,material_string="Cd",number_of_activations=Colimator_blade_activation[144],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*144)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*144))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*144,0) RELATIVE filter_direction

COMPONENT Cd_blade_145= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=695,material_string="Cd",number_of_activations=Colimator_blade_activation[145],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*145)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*145))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*145,0) RELATIVE filter_direction

COMPONENT Cd_blade_146= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=696,material_string="Cd",number_of_activations=Colimator_blade_activation[146],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*146)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*146))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*146,0) RELATIVE filter_direction

COMPONENT Cd_blade_147= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=697,material_string="Cd",number_of_activations=Colimator_blade_activation[147],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*147)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*147))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*147,0) RELATIVE filter_direction

COMPONENT Cd_blade_148= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=698,material_string="Cd",number_of_activations=Colimator_blade_activation[148],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*148)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*148))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*148,0) RELATIVE filter_direction

COMPONENT Cd_blade_149= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=699,material_string="Cd",number_of_activations=Colimator_blade_activation[149],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*149)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*149))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*149,0) RELATIVE filter_direction

COMPONENT Cd_blade_150= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=700,material_string="Cd",number_of_activations=Colimator_blade_activation[150],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*150)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*150))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*150,0) RELATIVE filter_direction

COMPONENT Cd_blade_151= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=701,material_string="Cd",number_of_activations=Colimator_blade_activation[151],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*151)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*151))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*151,0) RELATIVE filter_direction

COMPONENT Cd_blade_152= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=702,material_string="Cd",number_of_activations=Colimator_blade_activation[152],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*152)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*152))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*152,0) RELATIVE filter_direction

COMPONENT Cd_blade_153= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=703,material_string="Cd",number_of_activations=Colimator_blade_activation[153],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*153)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*153))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*153,0) RELATIVE filter_direction

COMPONENT Cd_blade_154= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=704,material_string="Cd",number_of_activations=Colimator_blade_activation[154],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*154)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*154))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*154,0) RELATIVE filter_direction

COMPONENT Cd_blade_155= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=705,material_string="Cd",number_of_activations=Colimator_blade_activation[155],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*155)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*155))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*155,0) RELATIVE filter_direction

COMPONENT Cd_blade_156= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=706,material_string="Cd",number_of_activations=Colimator_blade_activation[156],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*156)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*156))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*156,0) RELATIVE filter_direction

COMPONENT Cd_blade_157= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=707,material_string="Cd",number_of_activations=Colimator_blade_activation[157],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*157)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*157))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*157,0) RELATIVE filter_direction

COMPONENT Cd_blade_158= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=708,material_string="Cd",number_of_activations=Colimator_blade_activation[158],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*158)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*158))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*158,0) RELATIVE filter_direction

COMPONENT Cd_blade_159= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=709,material_string="Cd",number_of_activations=Colimator_blade_activation[159],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*159)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*159))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*159,0) RELATIVE filter_direction

COMPONENT Cd_blade_160= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=710,material_string="Cd",number_of_activations=Colimator_blade_activation[160],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*160)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*160))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*160,0) RELATIVE filter_direction

COMPONENT Cd_blade_161= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=711,material_string="Cd",number_of_activations=Colimator_blade_activation[161],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*161)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*161))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*161,0) RELATIVE filter_direction

COMPONENT Cd_blade_162= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=712,material_string="Cd",number_of_activations=Colimator_blade_activation[162],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*162)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*162))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*162,0) RELATIVE filter_direction

COMPONENT Cd_blade_163= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=713,material_string="Cd",number_of_activations=Colimator_blade_activation[163],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*163)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*163))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*163,0) RELATIVE filter_direction

COMPONENT Cd_blade_164= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=714,material_string="Cd",number_of_activations=Colimator_blade_activation[164],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*164)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*164))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*164,0) RELATIVE filter_direction

COMPONENT Cd_blade_165= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=715,material_string="Cd",number_of_activations=Colimator_blade_activation[165],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*165)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*165))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*165,0) RELATIVE filter_direction

COMPONENT Cd_blade_166= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=716,material_string="Cd",number_of_activations=Colimator_blade_activation[166],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*166)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*166))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*166,0) RELATIVE filter_direction

COMPONENT Cd_blade_167= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=717,material_string="Cd",number_of_activations=Colimator_blade_activation[167],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*167)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*167))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*167,0) RELATIVE filter_direction

COMPONENT Cd_blade_168= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=718,material_string="Cd",number_of_activations=Colimator_blade_activation[168],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*168)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*168))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*168,0) RELATIVE filter_direction

COMPONENT Cd_blade_169= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=719,material_string="Cd",number_of_activations=Colimator_blade_activation[169],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*169)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*169))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*169,0) RELATIVE filter_direction

COMPONENT Cd_blade_170= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=720,material_string="Cd",number_of_activations=Colimator_blade_activation[170],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*170)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*170))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*170,0) RELATIVE filter_direction

COMPONENT Cd_blade_171= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=721,material_string="Cd",number_of_activations=Colimator_blade_activation[171],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*171)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*171))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*171,0) RELATIVE filter_direction

COMPONENT Cd_blade_172= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=722,material_string="Cd",number_of_activations=Colimator_blade_activation[172],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*172)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*172))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*172,0) RELATIVE filter_direction

COMPONENT Cd_blade_173= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=723,material_string="Cd",number_of_activations=Colimator_blade_activation[173],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*173)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*173))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*173,0) RELATIVE filter_direction

COMPONENT Cd_blade_174= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=724,material_string="Cd",number_of_activations=Colimator_blade_activation[174],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*174)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*174))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*174,0) RELATIVE filter_direction

COMPONENT Cd_blade_175= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=725,material_string="Cd",number_of_activations=Colimator_blade_activation[175],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*175)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*175))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*175,0) RELATIVE filter_direction

COMPONENT Cd_blade_176= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=726,material_string="Cd",number_of_activations=Colimator_blade_activation[176],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*176)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*176))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*176,0) RELATIVE filter_direction

COMPONENT Cd_blade_177= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=727,material_string="Cd",number_of_activations=Colimator_blade_activation[177],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*177)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*177))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*177,0) RELATIVE filter_direction

COMPONENT Cd_blade_178= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=728,material_string="Cd",number_of_activations=Colimator_blade_activation[178],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*178)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*178))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*178,0) RELATIVE filter_direction

COMPONENT Cd_blade_179= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=729,material_string="Cd",number_of_activations=Colimator_blade_activation[179],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*179)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*179))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*179,0) RELATIVE filter_direction

COMPONENT Cd_blade_180= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=730,material_string="Cd",number_of_activations=Colimator_blade_activation[180],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*180)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*180))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*180,0) RELATIVE filter_direction

COMPONENT Cd_blade_181= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=731,material_string="Cd",number_of_activations=Colimator_blade_activation[181],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*181)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*181))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*181,0) RELATIVE filter_direction

COMPONENT Cd_blade_182= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=732,material_string="Cd",number_of_activations=Colimator_blade_activation[182],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*182)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*182))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*182,0) RELATIVE filter_direction

COMPONENT Cd_blade_183= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=733,material_string="Cd",number_of_activations=Colimator_blade_activation[183],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*183)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*183))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*183,0) RELATIVE filter_direction

COMPONENT Cd_blade_184= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=734,material_string="Cd",number_of_activations=Colimator_blade_activation[184],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*184)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*184))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*184,0) RELATIVE filter_direction

COMPONENT Cd_blade_185= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=735,material_string="Cd",number_of_activations=Colimator_blade_activation[185],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*185)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*185))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*185,0) RELATIVE filter_direction

COMPONENT Cd_blade_186= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=736,material_string="Cd",number_of_activations=Colimator_blade_activation[186],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*186)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*186))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*186,0) RELATIVE filter_direction

COMPONENT Cd_blade_187= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=737,material_string="Cd",number_of_activations=Colimator_blade_activation[187],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*187)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*187))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*187,0) RELATIVE filter_direction

COMPONENT Cd_blade_188= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=738,material_string="Cd",number_of_activations=Colimator_blade_activation[188],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*188)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*188))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*188,0) RELATIVE filter_direction

COMPONENT Cd_blade_189= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=739,material_string="Cd",number_of_activations=Colimator_blade_activation[189],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*189)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*189))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*189,0) RELATIVE filter_direction

COMPONENT Cd_blade_190= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=740,material_string="Cd",number_of_activations=Colimator_blade_activation[190],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*190)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*190))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*190,0) RELATIVE filter_direction

COMPONENT Cd_blade_191= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=741,material_string="Cd",number_of_activations=Colimator_blade_activation[191],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*191)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*191))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*191,0) RELATIVE filter_direction

COMPONENT Cd_blade_192= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=742,material_string="Cd",number_of_activations=Colimator_blade_activation[192],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*192)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*192))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*192,0) RELATIVE filter_direction

COMPONENT Cd_blade_193= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=743,material_string="Cd",number_of_activations=Colimator_blade_activation[193],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*193)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*193))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*193,0) RELATIVE filter_direction

COMPONENT Cd_blade_194= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=744,material_string="Cd",number_of_activations=Colimator_blade_activation[194],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*194)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*194))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*194,0) RELATIVE filter_direction

COMPONENT Cd_blade_195= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=745,material_string="Cd",number_of_activations=Colimator_blade_activation[195],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*195)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*195))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*195,0) RELATIVE filter_direction

COMPONENT Cd_blade_196= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=746,material_string="Cd",number_of_activations=Colimator_blade_activation[196],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*196)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*196))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*196,0) RELATIVE filter_direction

COMPONENT Cd_blade_197= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=747,material_string="Cd",number_of_activations=Colimator_blade_activation[197],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*197)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*197))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*197,0) RELATIVE filter_direction

COMPONENT Cd_blade_198= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=748,material_string="Cd",number_of_activations=Colimator_blade_activation[198],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*198)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*198))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*198,0) RELATIVE filter_direction

COMPONENT Cd_blade_199= Union_box(
xwidth=Filter_Cd_blade_width,
yheight=Filter_channel_height-Small_distance,
zdepth=Filter_Cd_blade_length,
priority=749,material_string="Cd",number_of_activations=Colimator_blade_activation[199],p_interact=0.1)
AT (Filter_blade_center_radius*sin(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*199)),0,Filter_blade_center_radius*cos(DEG2RAD*(-Filter_half_angle+Filter_blade_angular_separation*199))) RELATIVE filter_direction
ROTATED (0,-Filter_half_angle+Filter_blade_angular_separation*199,0) RELATIVE filter_direction

