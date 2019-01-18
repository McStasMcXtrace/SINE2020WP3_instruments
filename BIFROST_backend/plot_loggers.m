clear all;clc;close all;

iFitInit18

%folder = 'test_161'
%folder = 'example_4'
%folder = 'filter_test_17'
%folder = 'filter_test_28'
folder = 'filter_channel_test_20'

names = {'space_xz.dat' 'space_zy.dat' 'space_xy.dat' 'space_xz_closeup.dat' 'space_xz_direct_beam.dat'}

set(0,'DefaultTextInterpreter','Latex')
set(0,'DefaultAxesFontName', 'Times New Roman')

collected_fig = figure(1)
set(collected_fig,'position',[10 100 1100 900]);
%set(collected_fig, 'paperpositionmode', 'auto');


for index = 1:length(names)    
   data = iData([folder '/' names{index}])
   
   %subplot(2,2,index)
   collected_fig = figure(index)
   set(collected_fig,'position',[10 100+10*index 1100 900]);
   colormap hot
   imagesc(data{2},data{1},log10(data.signal)) 
   set(gca,'Ydir','normal')
   %colorbar
   
   default_caxis{index} = caxis;
   
   %if index < 4
   auto_caxis = default_caxis{index};
   auto_caxis(1) = auto_caxis(2) - 9;
   auto_caxis(2) = auto_caxis(2) - 0.5;
   caxis(auto_caxis)
   %else
   %auto_caxis = default_caxis{index};
   %auto_caxis(1) = auto_caxis(2) - 5.5;
   %auto_caxis(2) = auto_caxis(2) - 0.7;
   %caxis(auto_caxis)
   %end
   
   %view([0 90])
   xlabel('[m]')
   ylabel('[m]')
   
end

%%

for index = 1:length(names)
    figure(index)
    if index < 4
      auto_caxis = default_caxis{index};
      auto_caxis(1) = auto_caxis(2) - 9;
      auto_caxis(2) = auto_caxis(2) - 0.5;
      caxis(auto_caxis)
    elseif index == 4
      auto_caxis = default_caxis{index};
      auto_caxis(1) = auto_caxis(2) - 3.0;
      auto_caxis(2) = auto_caxis(2) - 0;
      caxis(auto_caxis)
    else 
      auto_caxis = default_caxis{index};
      auto_caxis(1) = auto_caxis(2) - 6.0;
      auto_caxis(2) = auto_caxis(2) - 0.7;
      caxis(auto_caxis)
    end
end


%%
subplot(2,2,1)
xlabel('z [m]')
ylabel('x [m]')

subplot(2,2,2)
xlabel('z [m]')
ylabel('y [m]')

subplot(2,2,3)
xlabel('x [m]')
ylabel('y [m]')

subplot(2,2,4)
xlabel('z [m]')
ylabel('x [m]')


%%
for index = 1:length(names)
   subplot(2,2,index)
   if index < 4
   auto_caxis = default_caxis{index};
   auto_caxis(1) = auto_caxis(2) - 9;
   auto_caxis(2) = auto_caxis(2) - 1;
   caxis(auto_caxis)
   else
   auto_caxis = default_caxis{index};
   auto_caxis(1) = auto_caxis(2) - 4.6;
   auto_caxis(2) = auto_caxis(2) - 0.8;
   caxis(auto_caxis)
   end
   
end


%%

print(collected_fig,'-dpng','-r400','bifrost_tank_prototype_6meV.png')