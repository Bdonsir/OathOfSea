#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int i = 0;
	for (; i < 3; i++) {
		char passward[] = { 0 };
		printf("���������룺\n");
		scanf("%s", passward);
		if (strcmp(passward, "548248664") == 0) {
			printf("��½�ɹ���\n");
			break;
		}
		else {
			printf("��������������������ԣ�\n");
		}
	}
	if (i == 3) {
		printf("��½ʧ�ܣ�\n");
	}
	system("pause");
	return 0;
}