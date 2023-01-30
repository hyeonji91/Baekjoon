#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int num[10], mod[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		mod[i] = num[i] / 42;
	}

}