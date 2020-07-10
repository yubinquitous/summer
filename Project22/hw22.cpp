#pragma warning (disable : 4996)
#include<stdio.h>

int input(void);

int main() {
	int a;
	int i = 0;
	a = input();
	while (i != a) {
		printf("*");
		i++;
		if (i % 5 == 0) printf("\n");
	}
}

int input() {
	int p;
	printf("# 정수값을 입력하세요 :");
	scanf("%d", &p);
	return p;
}