function aa=Tau_scan_analysis(directory,monitor)

% Create temporary zip-file for easy loading with iFit - automated
% once on McWeb
unix(['find ' directory ' -name ' monitor ' | sort -V  | xargs zip -r tempzip.zip']);

% Load the vectorised data and concatenate along 'temperature' axis
as=iData('tempzip.zip');
aa=(cat(0,as))';
b=iData([directory '/mccode.dat']);
Tau=b(1).x;
aa{1}=Tau;
imagesc(aa.x,Tau,aa.Signal);
set(gca,'ydir','normal')
xlabel('d-spacing [AA]')
ylabel('Reaction time / [min]')
set(gca,'xlim',[1.4 2.1])
unix('rm tempzip.zip');

eval(['print -depsc ' directory '.eps'])
