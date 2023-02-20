//https://abcdefgh123123.tistory.com/182 Âü°í
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char word[101];
	int grpWordCnt;
	int count;
	scanf("%d", &count);
  grpWordCnt = count;
 
	for (int i = 0; i < count; i++) {
		scanf("%s", word);
		char preWord = '0';
		int alphabet[26] = { 0, };

		for (int j = 0; word[j] != NULL; j++) {
			if (word[j] != preWord) {
				preWord = word[j];
				alphabet[word[j] - 'a'] +=1;
			}
			if (alphabet[word[j] - 'a'] == 2) {
				grpWordCnt -= 1;
				break;
			}
		}
	}
	printf("%d", grpWordCnt);
}