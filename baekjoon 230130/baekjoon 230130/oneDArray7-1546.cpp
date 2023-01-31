#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int count;
	double max = 0, sum = 0;
	scanf("%d", &count);
	double* score = (double*)malloc(sizeof(double) * count);
	for (int i = 0; i < count; i++) {
		scanf("%lf", &score[i]);
	}
	for (int i = 0; i < count; i++) {
		if (max < score[i])
			max = score[i];
	}
	for (int i = 0; i < count; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	printf("%lf", sum / count);
}