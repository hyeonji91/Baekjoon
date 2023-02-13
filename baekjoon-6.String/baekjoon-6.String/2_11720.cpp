#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int count, sum=0;
	scanf("%d", &count);
	char* num = (char*)malloc(sizeof(char) * count);

	scanf("%s", num);
	for (int i = 0; i < count; i++) {
		//int n = num[i];
		sum += num[i] - 48;
	}
	printf("%d", sum);

	free(num);
}