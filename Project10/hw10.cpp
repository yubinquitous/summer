#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int a;
	int b;
	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	printf("%d+%d = %d \n", a, b, a + b);
	printf("%d-%d = %d \n", a, b, a - b);
	printf("%d*%d = %d \n", a, b, a * b);
	printf("%d/%d = %.2f", a, b, (double)a / b);
	return 0;
}
