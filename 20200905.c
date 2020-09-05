#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int dogs = 0;
	printf("How many dogs do you have?\n");
	scanf("%d",&dogs);
	printf("So you have %d dogs!", dogs);
	return 0;
}