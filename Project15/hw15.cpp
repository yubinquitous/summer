#pragma warning(disable: 4996)
#include <stdio.h>
#include<string.h>

double input1(double);
double input2(double);
double calc(double, double);
void output(double);



int main() {
	double weight = 0;
	double height = 0;
	double BMI;

	weight = input1(weight);
	height = input2(height);
	BMI = calc(weight, height);
	output(BMI);
	return 0;
}

double input1(double weight) {
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	return weight;
}

double input2(double height) {
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &height);
	return height;
}

double calc(double weight, double height) {
	double BMI;
	BMI = weight / (height * height);
	return BMI;
}

void output(double BMI) {
	if (BMI < 18.5)
		printf("����� BMI�� %.1f���� ��ü���Դϴ�.", BMI);
	else if (18.5 <= BMI && BMI <= 25.0)
		printf("����� BMI�� %.1f���� ����ü���Դϴ�.", BMI);
	else if (25.0 <= BMI && BMI <= 30.0)
		printf("����� BMI�� %.1f���� ��ü���Դϴ�.", BMI);
	else if (30.0 <= BMI && BMI <= 40.0)
		printf("����� BMI�� %.1f���� ���Դϴ�.", BMI);
	else if (40.0 <= BMI)
		printf("����� BMI�� %.1f���� �����Դϴ�.", BMI);
}