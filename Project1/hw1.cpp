#include<stdio.h>
void printAge(int);
void printHeight(double);

int main()
{
	char name[20] = "최유빈";
	int age = 21;
	double height = 174;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("나이 : %d 살\n", age);
	return;
}

void printHeight(double height)
{
	printf("신장 : %lf cm", height);
	return;
}