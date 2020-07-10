#pragma warning (disable : 4996)
#include<stdio.h>
#include<string.h> 

int main() {
	char name1[20];
	char name2[30];
	int len1;
	int len2;

	printf("#성을 입력하시오 : ");
	scanf("%s", name1);
	printf("#이름을 입력하시오 : ");
	scanf("%s", name2);
	len1 = strlen(name1);
	len2 = strlen(name2);
	printf("%s %s\n", name1, name2);
	printf("%*d %*d", len1, len1, len2, len2);
	return 0;
}