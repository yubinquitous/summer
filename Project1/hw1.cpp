#include<stdio.h>
void printAge(int);
void printHeight(double);

int main()
{
	char name[20] = "������";
	int age = 21;
	double height = 174;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("���� : %d ��\n", age);
	return;
}

void printHeight(double height)
{
	printf("���� : %lf cm", height);
	return;
}