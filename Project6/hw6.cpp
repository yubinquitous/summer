#pragma warning(disable : 4996)
#include <stdio.h>

int input(void);
void output(double);

double C;
int F;

int main() {
	F = input();
	C = (double)5 / 9 * (F - 32);
	output(C);
	return 0;
}

int input(void) {
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &F);
	return F;
}

void output(double C) {
	printf("���� �µ��� %.1lf�� �Դϴ�.", C);
}