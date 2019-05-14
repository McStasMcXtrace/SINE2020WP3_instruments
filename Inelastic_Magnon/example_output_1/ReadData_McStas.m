function [] = ReadData_McStas()

cd Magnon_bcc_visualisation_20190513_130344 

for i = 1:90
    cd(num2str(i-1))
    Events_2p8{i}=ReadMcStasData_Event('Events2_8_list.p.E.U2.th.t.U1');
    Events_4p0{i}=ReadMcStasData_Event('Events4_0_list.p.E.U2.th.t.U1');
    Events_5p0{i}=ReadMcStasData_Event('Events5_0_list.p.E.U2.th.t.U1');
    display(['Processing folder: ' num2str(i)]);
    cd ..
end
cd ..

save 'McStasEvents.mat' Events_2p8 Events_4p0 Events_5p0

