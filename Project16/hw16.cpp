#pragma warning (disable : 4996)
#include<stdio.h>

int input(void);
void output(int);
int calc(int);

int main() {
	int num;
	int m;
	
	while (1) {
		num = input();
		if (num <= 0)
			break;
		m = calc(num);
		output(m);
	}
	return 0;
}

int input() {
	int n;
	printf("역수를 입력하시오 : ");
	scanf("%d", &n);
	return n;
}

int calc(int num) {
	int m = 0;
	if (1 <= num && num <= 5)
		m = 600;
	else if (6 <= num && num <= 10)
		m = 800;
	else if (10 < num) {
		int b;
		b = (num - 9) / 2;
		m = 800 + 100 * b;
	}
	return m;
}

void output(int m) {
	printf("요금 : %d원\n", m);
	return;
}