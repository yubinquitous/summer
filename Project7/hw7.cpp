#pragma warning (disable : 4996)
#include <stdio.h>

double input1(double);
double input2(double);
void output(int, int, double);

int main() {
	double km = 0;
	double h = 0;
	int hour;
	int min;
	double sec;

	km = input1(km);
	h = input2(h);
	hour = km / h;
	min = (km - h * hour) / (h / 60);
	sec = (km - h * hour - h / 60 * min) / (h / 60 / 60);
	output(hour, min, sec);
	return 0;
}

double input1(double km) {
	printf("* �Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &km);
	return km;
}

double input2(double h) {
	printf("* �ü��� �Է��Ͻÿ�(km/h���� : ");
	scanf("%lf", &h);
	return h;
}

void output(int hour, int min, double sec) {
	printf("%d	%d	%lf	", hour, min, sec);
}