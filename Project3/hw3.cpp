#include<stdio.h>
int a = 54321;
int h;
int m;
int s;
int main() {
	h = a / 60 / 60;
	m = (a - h * 60 * 60) / 60;
	s = a - h * 60 * 60 - m * 60;
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", a, h, m, s);
	return 0;
}