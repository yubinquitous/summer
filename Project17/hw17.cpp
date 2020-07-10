#include<stdio.h>
#include<string.h>

#pragma warning (disable : 4996)

int main() {
	char name[30];
	double height;
	char S;
	int len;

	printf("# 성명 입력 : ");
	fgets(name, 30, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("# 키 입력(com단위) : ");
	scanf("%lf", &height);

	printf("# 성별 입력(M/F) : ");
	scanf(" %c", &S);

	if (S == 'M') {
		printf("%s씨의 키는 %.2lf이고 남성입니다.", name, height);
	}
	else
		printf("%s씨의 키는 %.2lf이고 여성입니다.", name, height);

	return 0;
}