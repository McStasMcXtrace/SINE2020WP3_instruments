//functions

// calculate chopper open time
double calcopentime(double pos, double minl, double maxl){
	// base calculation on minl from start of pulse,
	// maxl from end of pulse.
	// it is assumed that maxl-minl is not greater than frame width
	double opentime;
	printf("pos=%g; minl=%g; maxl=%g;\n",pos-0.08,minl,maxl);
	opentime = ((maxl-minl)*(pos-0.08)/3.96)+2.86;

	return opentime;
}

double calcOT(double opening, double freq){
	//opentime in ms
	return 1000*opening/(360*freq);
}

// calculate chopper disk 1 delay
double calcdisk1delay(double pos, double opening, double minl, double freq){
	// base calculation on leading edge at guide centre
	// delay is tof for leading edge + rotation of half opening
	double delay;

	delay = (minl*(pos-0.08)/3.96)+((opening/2)*1000/(freq*360));

	return delay;
}

// calculate chopper disk 2 delay
double calcdisk2delay(double pos, double opening, double maxl, double freq){
	// base calculation on trailing edge at guide centre
	// delay is tof for trailing edge - rotation of half opening
	double delay;

	delay = (maxl*(pos-0.08)/3.96)+2.86-((opening/2)*1000/(freq*360));

	return delay;
}

//calculate lambda
double calclambda(double starttime,double tof,double dist){
  return (tof-starttime)*3.96/dist;
}

// calculate angle of arm after vertically curved guide
double calcAlpha(double length, double radius) {
	return RAD2DEG * length/radius;
}

// calculate position and angle of arm after vertically curved guide
double calcY(double length, double radius) {
	double alpha = DEG2RAD * calcAlpha(length, radius);
	return radius*(1.0-cos(alpha));
}

// calculate position and angle of arm after vertically curved guide
double calcZ(double length, double radius) {
	double alpha = DEG2RAD * calcAlpha(length, radius);
	return radius*sin(alpha);
}

