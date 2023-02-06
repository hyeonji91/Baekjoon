#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void d(int num, int arr[]) {
	int hun, tens, ones;
	int temp, d;
	hun = num / 100;
	temp = num % 100;
	tens = temp / 10;
	ones = temp % 10;
	if (hun - tens == tens - ones||num<100)
		arr[num - 1] = num;
}
int main(void) {
	int N, count=0;
	scanf("%d", &N);
	int* arr = (int*)malloc(sizeof(int) * N);
	memset(arr, 0, sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		d(i + 1, arr);
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] != 0)
			count++;
	}
	printf("%d", count);

}