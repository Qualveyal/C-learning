#include <stdio.h>

int midnight();
int last_one_third();
int last_one_sixth();
int seperation_h();
int seperation_m();

double dif;

double t[10];

int hour, minute;


int main() {

	printf("Enter Fajr time: ");
	scanf("%lf %lf", &t[0], &t[1]);				//get Fajr time (format: <hour minute>) and puts in in the array
	
	t[4] = t[0] + (t[1]/60);					//changes format from <hour minute> to <decimal>
	
	printf("Enter Maghrib time: ");
	scanf("%lf %lf", &t[2], &t[3]);				//same as with Fajr time

	t[5] = t[2] + (t[3]/60);					//same as with Fajr time
	
	dif = 12 - (t[5] - t[4]);					//calculate the difference between Fajr and Maghrib
	
	/**********************************
	calculate the times and prints it
	***********************************/	
	midnight();									
	last_one_third();
	last_one_sixth();
		
	return 0;
}

int midnight() {
	double temp = t[5] + (dif / 2);

	hour   = seperation_h(temp);
	minute = seperation_m(temp);
	
	printf("Midnight: %d %d\n", hour, minute);
	
	return 0;
}

int last_one_third() {
	double temp = t[4] - (dif/3);

	hour   = seperation_h(temp);
	minute = seperation_m(temp);
	
	printf("Last one-third: %d %d\n", hour, minute);
	
	return 0;
}

int last_one_sixth() {
	double temp = t[4] - (dif/6);
	
	hour   = seperation_h(temp);
	minute = seperation_m(temp);
	
	printf("Last one-sixth: %d %d\n", hour, minute);
	
	return 0;
}

int seperation_h(double a) {
	int h = (int)a;									//converts the double into int, drops the decimal part
	return h;
}

int seperation_m(double a) {
	int h = (int)a;									//converts double into int
	double temp = (a - h)*60;					/*  substracts int from the original double (double - int) to get the 
													decimal part. Then multiplies by 60 to get minute.                  */
	int m = (int)temp;								//turns the minute obtained as double into an int, droping the decimal part.

	return m;
}

