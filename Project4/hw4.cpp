#include<stdio.h>
double a = 365.2422;
int d;
int h;
int m;
double s;

int main() {
	d = a;
	h = (a - d) * 24;
	m = (a - d - (double)h / 24) * 24 * 60;
	s = (a - d - (double)h / 24 - (double)m / 24 / 60) * 24 * 60 * 60;

	printf("%.4f���� %d�� %d�ð� %d�� %.2f�� �Դϴ�.", a, d, h, m, s);
	return 0;
}