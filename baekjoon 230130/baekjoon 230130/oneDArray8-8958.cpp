#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int count;
	scanf("%d", &count);
	char* TF[80];
	TF[80]=(char*)malloc(sizeof(char) * count);
	for (int i = 0; i < count; i++) {
		scanf("%s", TF[i]);
		printf("TF[%d] = %s", i, TF[i]);
	}
}