#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	double d;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);
	d = (a + b + c) / 3.00;
	printf("������ %d �̰� ����� %.2f �Դϴ�.", a + b + c, d);
}