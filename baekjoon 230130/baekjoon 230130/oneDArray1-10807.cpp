#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int* num;
	int count;
	int searchNum, searchCount=0;
	scanf("%d", &count);
	num = (int*)malloc(sizeof(int) * count);


	for (int i = 0; i < count; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &searchNum);
	for (int i = 0; i < count; i++) {
		if (searchNum == num[i])
			searchCount++;
	}
	printf("%d", searchCount);
	return 0;

}