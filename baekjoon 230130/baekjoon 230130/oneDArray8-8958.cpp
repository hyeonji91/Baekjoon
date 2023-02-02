#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int count,j=0;
	int index=1;//연속된 o 개수 표시
	scanf("%d", &count);
	char TF[80];
	int* score = (int*)malloc(sizeof(int) * count);
	memset(score, 0, sizeof(int)*count);
	for (int i = 0; i < count; i++) {
		scanf("%s", TF);
		while (TF[j] != NULL) {
			if (TF[j] == 'O') {
				score[i] += index;
				index++;
			}
			else if(TF[j] == 'X') {
				index = 1;
			}
			j++;
		}
		index = 1;
		j = 0;
	}
	for (int i = 0; i < count; i++) {
		printf("%d\n", score[i]);
	}
}