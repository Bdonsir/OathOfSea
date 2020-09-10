#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	printf("Li Ming\n");
	printf("Li\nMing\n");
	printf("Li");
	printf(" Ming\n");
	printf("Li Ming,China\n");
	int age = 0;
	printf("How old are you?\n");
	scanf("%d", &age);
	printf("%d,it's %d days!\n",age,age*365);
	return 0;
}