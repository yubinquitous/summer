#pragma warning(disable: 4996)
#include <stdio.h>

int inputAge(int);
int inputCount(int);
int output(int);
int age;
int count;
int fee;
int d;
int e = 0;
int main() {
	age = inputAge(age);
	count = inputCount(count);
	if (age <= 7)
		fee = count * 500;
	else if (8 <= age && age <= 13)
		fee = count * 700;
	else if (14 <= age && age <= 19)
		fee = count * 1000;
	else if (20 <= age && age <= 55)
		fee = count * 1500;
	else if (56 <= age)
		fee = count * 500;
	if (count >= 5)
		e = fee * 0.1;
	d = output(d);
	return 0;
}
int inputAge(int age) {
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}
int inputCount(int count) {
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &count);
	return count;
}
int output(int d) {
	printf("����� => %d ��\n", fee);
	printf("���αݾ� -> %d ��\n", e);
	printf("�����ݾ� => %d ��", fee - e);
	return d;
}
