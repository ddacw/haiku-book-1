#include <cstdio>
#include <iostream>

double Interest(double Principal, double Rate, int Time) {
	return Principal * Rate * double(Time);
}

int main() {
	double Principal, Rate;
       	int Time;
	Principal = 20000.0;
	Rate = 0.05;
	Time = 24;
	printf("The interest on %.2lf at %2.lf%% interest for %d months is %.2lf\n",\
		Principal, Rate * 100., Time, Interest(Principal, Rate, Time));
}	
			
