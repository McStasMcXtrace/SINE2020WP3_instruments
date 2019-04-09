iFitInit18

folder_name = 'mix_2';

monitor_names = {'Fe_alpha_L.dat' 'Iron_mix_L.dat'};


for index = 1:length(monitor_names)
   data{index} = iData([folder_name '/' monitor_names]) 
   
   figure(1)
   
   clf
   hold on
   plot(data{index})
   
end