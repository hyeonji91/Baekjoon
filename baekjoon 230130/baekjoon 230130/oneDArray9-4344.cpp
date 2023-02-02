#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int count;//데이터 개수
	int* sCount, sum = 0, aver, averCount=0;
	float* result;
	scanf("%d", &count);
	sCount = (int*)malloc(sizeof(int) * count); //학생 수
	result = (float*)malloc(sizeof(float) * count); //결과 값
	for (int i = 0; i < count; i++) {
		scanf("%d", &sCount[i]);
		int *score = (int*)malloc(sizeof(int) * sCount[i]);
		for (int j = 0; j < sCount[i]; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		aver = sum / sCount[i];
		for (int j = 0; j < sCount[i]; j++) {
			if (score[j] > aver) {
				averCount++;
			}
		}
		result[i] = (float)averCount/ sCount[i] *100;
		averCount = 0;
		sum = 0;
	}
	for (int i = 0; i < count; i++) {
		printf("%.3f\%\n", result[i]);
	}
}