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
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &F);
	return F;
}

void output(double C) {
	printf("섭씨 온도는 %.1lf도 입니다.", C);
}