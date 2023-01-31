#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int num[10], mod[10];
	int std[42] = { 0 };
	int count = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		mod[i] = num[i] % 42;
		std[mod[i]]++;
	}
	for (int i = 0; i < 42; i++) {
		if (std[i] != 0) {
			count++;
		}
	}
	printf("%d", count);
}