function [] = ProcessEvents_McStas()

load 'McStasEvents.mat'
close all

%Just analyse 5 meV

Lms = 162;
Lsd = 1.22;
Ef = 5.0;
count = 1;
a = 6.28;
b = 6.28;
count2 = 1;

hh = [];
kk = [];
ee = [];
ii = [];
for i = 1:length(Events_5p0)
    
    A3 = Events_5p0{i}.SampleRotation;
    Data = Events_5p0{i}.DataArray;
    for j = 1:size(Data, 1)
        if Data(j, 4) > 0 && Data(j, 4) < 90
        TwoT(j) = Data(j, 4);
        time(j) = Data(j, 5);
        I(j) = Data(j, 1);
        %Ef(j)= Data(j, 2);
       
        TOA(j) = (time(j) - (Lsd)/(437*sqrt(Ef)));
        Ts(j) = Data(j, 6);
        Ei(j) = (Lms/(TOA(j)*437))^2;
        diff(j) = (Ei(j) - Data(j, 3));
        ki = sqrt(Ei(j)/2.072); %Calculate ki
        kf = sqrt(Ef/2.072);%Calculate kf
        Q = sqrt(ki^2 + kf^2 - 2*ki*kf*cosd(TwoT(j)));
        eta=asind((kf*sind(TwoT(j)))/Q);
        phi = A3+eta;
        H(j) = (a*Q*cosd(phi))/(2*pi);
        K(j) = (b*Q*sind(phi))/(2*pi);
        dE(j)=Ei(j)-Ef;
        count = count + 1;
        %display(['H: ' num2str(H(j)) ',   K: ' num2str(K(j)) ',  dE:  ' num2str(dE(j))]);
        %dE(j)
        if 11.5 > dE(j) && dE(j) > 11 
        hh(j) = (a*Q*cosd(phi))/(2*pi);
        kk(j) = (b*Q*sind(phi))/(2*pi);
        ee(j)=Ei(j)-Ef;  
        ii(j)=I(j);
        count2 = count2+1;
        end
    %    if mod(j, 1000) == 0
     %       display('hey')
      %  end
        
        end
    end
    display(['Rotation: ' num2str(A3)]);
end
figure
%size(TOA)
%ize(Data(:,5))
%hist(TOA-Data(:,6), 100);
figure
hist(Ei, 100);

length(Ts)
hh;
kk;

ymin = min(kk);
ymax = max(kk);
xmin = min(hh);
xmax = max(hh);

dx=0.05;
dy=0.05;

x_edge=[xmin:dx:xmax];
y_edge=[ymin:dy:ymax];
[X,Y]=meshgrid(x_edge, y_edge);
Z=griddata(hh,kk,ee,X,Y);
Z = Z+0.001;
%Z = log(Z);
figure
surf(X, Y, Z, 'EdgeColor','none');
 c = colorbar;
 
 xlabel('ToF [ms]', 'fontname', 'times', 'fontsize', 17)
 ylabel('Wavelength [Å]', 'fontname', 'times', 'fontsize', 17)
 ylabel(c, 'Counts [a.u.]', 'fontname', 'times', 'fontsize', 17)
 view(0,90);
 set(gca, 'fontsize', 12)
 set(c, 'fontsize', 12);
 caxis([12.5 13.5])
 daspect([1 1 1])
 %set(gca, 'xlim', [xmin/1000 xmax/4000]);
 %set(gca, 'ylim', [ymin 17]);
 %line([xmin/1000 xmax/2000], [1 1],[20 20],  'color', 'k')
 %line([xmin/1000 xmax/2000], [2 2],[20 20],  'color', 'k')
 %line([xmin/1000 xmax/2000], [3 3],[20 20],  'color', 'k')
 
 figure
 scatter3(hh, kk, ee)
 %set(gca, 'zlim', [10 15])
 view(0,90);
 daspect([1 1 1])
 count2

 
        ki = sqrt(Ei(j)/2.072); %Calculate ki
        kf = sqrt(Ef/2.072);%Calculate kf
        