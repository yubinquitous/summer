#pragma warning (disable : 4996)
#include<stdio.h>

int main() {
	int a, b;
	
	while (1) {
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		scanf("%d %d", &a, &b);

		if (getchar() != '\n')
			break;
		if (a >= b)
			printf("%d - %d = %d\n", a, b, a - b);
		else
			printf("%d - %d = %d\n", b, a, b - a);
	}
	return 0;
}