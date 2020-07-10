#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	double d;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	d = (a + b + c) / 3.00;
	printf("총점은 %d 이고 평균은 %.2f 입니다.", a + b + c, d);
}