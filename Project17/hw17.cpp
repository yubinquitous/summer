#include<stdio.h>
#include<string.h>

#pragma warning (disable : 4996)

int main() {
	char name[30];
	double height;
	char S;
	int len;

	printf("# ���� �Է� : ");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("# Ű �Է�(com����) : ");
	scanf("%lf", &height);

	printf("# ���� �Է�(M/F) : ");
	scanf(" %c", &S);

	if (S == 'M') {
		printf("%s���� Ű�� %.2lf�̰� �����Դϴ�.", name, height);
	}
	else
		printf("%s���� Ű�� %.2lf�̰� �����Դϴ�.", name, height);

	return 0;
}