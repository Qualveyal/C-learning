#include <stdio.h>

void midnight();
void last_one_third();
void last_one_sixth();
int hour();
int minute();

// F = Fajr | M = Maghrib | h = hour | m = minute | t = time
double Ft, Mt, dif;

double Fh, Fm, Mh, Mm;

int midnight_h, midnight_m;
int last_one_third_h, last_one_third_m;
int last_one_sixth_h, last_one_sixth_m;


int main() {
	
	printf("Enter Fajr time: ");
	scanf("%lf %lf", &Fh, &Fm);
	Ft = Fh + (Fm/60);
	
	printf("Enter Maghrib time: ");
	scanf("%lf %lf", &Mh, &Mm);	
	Mt = Mh + (Mm/60);	
	
	dif = 12 - (Mt - Ft);
	
	midnight();
	last_one_third();
	last_one_sixth();
	
	printf("Midnight: %d %d", midnight_h, midnight_m);
	printf("\nLast one-third: %d %d", last_one_third_h, last_one_third_m);
	printf("\nLast one-sixth: %d %d", last_one_sixth_h, last_one_sixth_m);
	
	return 0;
}

void midnight() {
	double temp = Mt + (dif / 2);

	midnight_h = hour(temp);
	midnight_m = minute(temp);
}

void last_one_third() {
	double temp = Ft - (dif/3);

	last_one_third_h = hour(temp);
	last_one_third_m = minute(temp);
}

void last_one_sixth() {
	double temp = Ft - dif/6;
	
	last_one_sixth_h = hour(temp);
	last_one_sixth_m = minute(temp);
}

int hour(double a) {
	int hour = (int)a;
	return hour;
}

int minute(double a) {
	int hour = (int)a;
	double temp = (a - hour)*60;
	int minute = (int)temp;

	return minute;
}

