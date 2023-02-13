#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int testCount;
	int repeatCount;
	char word[20];

	scanf("%d", &testCount);
	for (int k = 0; k < testCount; k++) {
		scanf("%d", &repeatCount);
		scanf("%s", word);
		for (int i = 0; i < strlen(word); i++) {
			for (int j = 0; j < repeatCount; j++) {
				printf("%c", word[i]);
			}
		}
		printf("\n");//
	}

}
