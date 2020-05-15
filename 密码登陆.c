#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int i = 0;
	for (; i < 3; i++) {
		char passward[] = { 0 };
		printf("ÇëÊäÈëÃÜÂë£º\n");
		scanf("%s", passward);
		if (strcmp(passward, "548248664") == 0) {
			printf("µÇÂ½³É¹¦£¡\n");
			break;
		}
		else {
			printf("ÄúµÄÃÜÂëÊäÈë´íÎó£¬ÇëÖØÊÔ£¡\n");
		}
	}
	if (i == 3) {
		printf("µÇÂ½Ê§°Ü£¡\n");
	}
	system("pause");
	return 0;
}