% Converts a cif file to lau

%input_file = 'CoCl2_2H2O_EntryWithCollCode22082.cif';
%output_file_name = 'CoCl2_2H2O_EntryWithCollCode22082_25meV.laz';

%original_name = 'Fe3O4_mp-19306_computed'
%original_name = 'Fe2O3'
original_name = 'FeOOH'

input_file = [original_name '.cif'];
output_file_name = [original_name '.laz'];

%CoCl2_2H2O_deutorated_test.cif 

% Set a max E instead of lambda_min
E=1000;%mev
E=E*1.602E-22;
h=6.626E-34;
mass=1.675E-27;
lambda_min=sqrt(h^2/(2*mass*E))*1E10;
%lambda_min = 0.5;

disp(input_file)
cif2hkl(input_file,output_file_name,lambda_min,'p',1)
