restoredefaultpath
iFitInit18
clear all

%folder_name = 'mix_2';    % 10 % 
%folder_name = 'mix_p_20'; % 20 %
%folder_name = 'mix_p_30'; % 30 % 
%folder_name = 'mix_p_40'; % 40 % 

%folder_name = 'mix_small_p_10'; % 10 % smaller wavelength band
%folder_name = 'mix_p_15'; % 10 % smaller wavelength band


%folder_name = 'mix_p_10_more_stat';       % 5 min
%folder_name = 'mix_p_10_more_stat_narrow' % 5 min
%folder_name = 'mix_p_10_extreme_stat';     % 50 min

%folder_name = 'mix_small_p_15'; % 10 % smaller wavelength band
%folder_name = 'mix_high_p_15'; % 15 % smaller wavelength band
%folder_name = 'mix_high_p_15_more_stat';

folder_name = 'powder_bug_fixed_3';

monitor_names = {'Fe_alpha_L.dat' 'cementite_L.dat' 'Iron_mix_L.dat'};
%monitor_names = {'Fe_alpha_L.dat' 'cementite_L.dat'}

monitor_names = {'Fe_alpha_L.dat'};





for index = 1:length(monitor_names)
   mc_data{index} = iData([folder_name '/' monitor_names{index}]);
end


powder_data{1} = importdata('alpha_Fe.laz',' ',35)
powder_data{2} = importdata('cementite_300K.laz',' ',37)







power_fraction(1)=0.01;
power_fraction(2)=0.01;
color_list = {[0.8 0 0] [0 0 0.8] [0.1 0.1 0.1]}

for p_index = 1:length(powder_data)
d_spacings{p_index} = powder_data{p_index}.data(:,5);
miller_indices{p_index} = powder_data{p_index}.data(:,1:3);
lambda_edges{p_index} = 2.*d_spacings{p_index};
scattering_power{p_index} = powder_data{p_index}.data(:,4).*powder_data{p_index}.data(:,6);
%scattering_power{p_index} = powder_data{p_index}.data(:,6);

max_scattering_power(p_index) = max(scattering_power{p_index});
end



figure(1)
clf

for index = 1:length(mc_data)
   hold on
   h = plot(mc_data{index},'hide_errorbars')
   set(h,'color',color_list{index})
   set(h,'LineWidth',2)
end
box on

%legend('Fe','Cementite','Mix')

set(gca,'FontSize',20);
title('')
xlabel('Wavelength [Å]','fontsize',25)
ylabel('Transmitted intensity [n/s]','fontsize',25)





%mc_data_set{1} = [mc_data{1}.x ; mc_data{1}.signal]
%mc_data_set{2} = [mc_data{2}.x ; mc_data{2}.signal]

max_l_mon = max(mc_data{1}.x);
min_l_mon = min(mc_data{1}.x);

xlim([min_l_mon max_l_mon])

for p_index = 1:length(powder_data)
  for index = 1:length(lambda_edges{p_index})
     if (scattering_power{p_index}(index) > power_fraction(p_index)*max_scattering_power(p_index))
       %plot([lambda_edges{p_index}(index) lambda_edges{p_index}(index)],[0 4E-7],'--k') 
       
       if (lambda_edges{p_index}(index) < max_l_mon && lambda_edges{p_index}(index) > min_l_mon)
         data_index = find(lambda_edges{p_index}(index) < mc_data{p_index}.x,1);
       
         if ~isempty(data_index)
           %x_value = mc_data{p_index}.x(data_index(1));
           x_value = lambda_edges{p_index}(index);
           signal_value = mc_data{p_index}.signal(data_index(1));
           h = text(x_value,signal_value,['  (' num2str(miller_indices{p_index}(index,:)) ')'],'fontsize',18);
           plot(x_value,signal_value,'.k','markersize',30)
         
           if p_index == 1
             set(h,'Rotation',60);
             set(h,'color',[0.9 0 0])
           else
             set(h,'Rotation',60); 
             set(h,'color',[0 0 0.9])
           end
         end
       end       
     end
  end
end










