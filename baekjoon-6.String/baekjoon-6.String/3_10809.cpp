#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char vol[100];
	int alphabet[26];
	memset(alphabet, -1, sizeof(alphabet));
	scanf("%s", vol);

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(vol); j++) {
			if (97 + i == vol[j]){
				if (alphabet[i] == -1) {
					alphabet[i] = j;
				}
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
}