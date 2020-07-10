//p.30	
//¿¹Á¦ 3-4

#include<stdio.h>
int main() {
	int i, j;
	int sum = 0;
	for (i = 1; i <=10; i++) {
		for (j = 1; j <=10; j++) {
			sum += j+(i-1)*10;
		}
		printf("1 ~ %d -> %d\n", i*10, sum);
	}
	return 0;
}