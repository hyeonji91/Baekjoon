#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int count, min=1000000, max=-1000000;
	scanf("%d", &count);
	int* num = (int*)malloc(sizeof(int) * count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < count; i++) {
		if (min > num[i])
			min = num[i];
		if (max < num[i])
			max = num[i];
	}
	printf("%d %d", min, max);
	return 0;
}