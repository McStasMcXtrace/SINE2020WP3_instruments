function aa=Temperature_scan_analysis(directory,monitor)

% Create temporary zip-file for easy loading with iFit - automated
% once on McWeb
unix(['find ' directory ' -name ' monitor ' | sort -V  | xargs zip -r tempzip.zip']);

% Load the vectorised data and concatenate along 'temperature' axis
as=iData('tempzip.zip');
aa=log(cat(0,as))';
b=iData([directory '/mccode.dat']);
T=b(1).x;
aa{1}=T;
imagesc(aa.x,T,aa.Signal);
set(gca,'ydir','normal')
xlabel('d-spacing [AA]')
ylabel('Temperature / [K]')

unix(['mv tempzip.zip ' directory '.zip']);

eval(['print -depsc ' directory '.eps'])
