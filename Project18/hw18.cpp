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
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	return age;
}
int inputCount(int count) {
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &count);
	return count;
}
int output(int d) {
	printf("입장료 => %d 원\n", fee);
	printf("할인금액 -> %d 원\n", e);
	printf("결제금액 => %d 원", fee - e);
	return d;
}
