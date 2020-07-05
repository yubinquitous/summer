#pragma warning(disable : 4996)
#include<stdio.h>

int input(void);
void output(double);

int main() {
	int a = 660; //기본요금
	double b = 88.5; //kw당 사용요금
	double c;//전체 요금
	double d;//최종 사용 요금
	int e; //사용량

	e = input();
	
	c = a + (e * b);
	d = c + c * 0.09;

	output(d);
	
	return 0;
}

int input(void) {
	int e;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &e);
	return e;
}

void output(double d) {
	printf("전기 사용요금은 %lf 원 입니다.", d);
}