#pragma warning (disable : 4996)
#include <stdio.h>

int input(void);

int main() {
	int number;
	number = input();
	printf("�Էµ� ���� 8 ������ %#o �Դϴ�.\n", number);
	printf("�Էµ� ���� 16 ������ %#x �Դϴ�.", number);
	return 0;
}

int input() {
	int n;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &n);
	return n;
}