#pragma warning(disable : 4996)
#include<stdio.h>

int input(void);
void output(double);

int main() {
	int a = 660; //�⺻���
	double b = 88.5; //kw�� �����
	double c;//��ü ���
	double d;//���� ��� ���
	int e; //��뷮

	e = input();
	
	c = a + (e * b);
	d = c + c * 0.09;

	output(d);
	
	return 0;
}

int input(void) {
	int e;
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf("%d", &e);
	return e;
}

void output(double d) {
	printf("���� ������� %lf �� �Դϴ�.", d);
}