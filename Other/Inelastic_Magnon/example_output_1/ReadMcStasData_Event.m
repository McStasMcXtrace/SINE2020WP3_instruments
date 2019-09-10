    function [DataStruc] = ReadMcStasData_1d(filename)

    %datapath = 'C:\Users\rasp\Documents\MATLAB\Experiments\BIFROST\MIRA_PG\Data'
    %filename = [datapath '\9001_000' num2str(number) '.dat'] 
    %cd Data
    %DataStruc.Num = number;
      
    if nargin==0,
        display('Filenumber not given');
        %cd C:\Users\rasp\Documents\MATLAB\Experiments\BIFROST\MIRA_PG\
        return
    else
        fid=fopen(char(filename),'r');
    end

%     while 1
%            fileline = fgetl(fid);
%            if ~isstr(fileline),break, end
%            if findstr('#    T_ccr21_regulationmode :',fileline),break,end
%     end
%     fileline = fgetl(fid)
%     A4=str2num(fileline((strfind(fileline,':')+1):(strfind(fileline,'deg')-1)))
%     DataStruc.A4 = A4;
%     
     while 1
            fileline = fgetl(fid);
            if ~isstr(fileline),break, end
            if findstr('# Instrument: ',fileline),break,end
     end
     fileline = fgetl(fid);
     DataStruc.Ncount=str2num(fileline((strfind(fileline,':')+1):end));
         
     while 1
            fileline = fgetl(fid);
            if ~isstr(fileline),break, end
            if findstr('# Trace: ',fileline),break,end
     end
     fileline = fgetl(fid);
     DataStruc.Gravitation = fileline((strfind(fileline,':')+1):end);
     
     while 1
            fileline = fgetl(fid);
            if ~isstr(fileline),break, end
            if findstr('# Param: dlambda',fileline),break,end
     end
     fileline = fgetl(fid);
     DataStruc.SampleRotation = str2num(fileline((strfind(fileline,'=')+1):end));
     while 1
            fileline = fgetl(fid);
            if ~isstr(fileline),break, end
            if findstr('# yvar:',fileline),break,end
     end
     fileline = fgetl(fid);
     DataStruc.xlabel=fileline((strfind(fileline,':')+1):end);
     fileline = fgetl(fid);
     DataStruc.ylabel=fileline((strfind(fileline,':')+1):end);
     fileline = fgetl(fid);
     DataStruc.zvar=fileline((strfind(fileline,':')+1):end);
     fileline = fgetl(fid);
     cuts = strfind(fileline, ' ');
     DataStruc.xylimits=[str2num(fileline(cuts(2):cuts(3))) str2num(fileline(cuts(3):end))];
     fileline = fgetl(fid);
     DataStruc.variables=fileline((strfind(fileline,':')+1):end);
     fileline = fgetl(fid);
     fileline = fgetl(fid);
    count = 1;
    %format short g
    %# Errors [Div2d_sample/Div2d_sample.dat] I_err:
    
    
    while 1
        fileline = fgetl(fid);
        if fileline == -1,break,end
        %datarray = regexp(fileline, ';', 'split');

        C = textscan(fileline,'%f');
        DataStruc.DataArray(count, :) = C{1}(:);
                
        %Data(count, :) = str2double(fil
        count = count + 1;

    end
       

    fclose(fid);
    