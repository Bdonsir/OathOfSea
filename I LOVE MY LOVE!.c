#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
int main() {
	char str1[] = "I LOVE MY LOVE!";
	char str2[] = "###############";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		system("cls");
		printf("%s\n", str2);
		Sleep(400);//参数单位是毫秒！1秒＝1000毫秒
	}
	system("pause");
	return 0;
}