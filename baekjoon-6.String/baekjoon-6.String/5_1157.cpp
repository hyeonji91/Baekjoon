#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char word[1000001];
	int alphabet[26] = { 0 };
	int max =- 1, maxAlphabet, maxcnt=0, wordLength;
	scanf("%s", word);
	wordLength = strlen(word);
	for (int j = 0; j < wordLength; j++) {
		for (int i = 0; i < 26; i++) {
			if (word[j] == 65 + i || word[j] == 97 + i) {
				alphabet[i]++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max < alphabet[i]) {
			max = alphabet[i];
			maxAlphabet = i;
			maxcnt = 0;
		}
		else if (max == alphabet[i]) {//==로 써야되는데 =로 씀 이 실수 2번째다 그만 해라
			maxcnt++;
		}
	}
	if (maxcnt != 0) {
		printf("?\n");
	}
	else
		printf("%c", 65 + maxAlphabet);
}

////1
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main(void) {
//	char word[1000001];
//	int alphabet[26] = { 0 };
//	int max = -1, maxAlphabet, wordLength;
//	scanf("%s", word);
//	wordLength = strlen(word);
//	for (int j = 0; j < wordLength; j++) {
//		for (int i = 0; i < 26; i++) {
//			if (word[j] == 65 + i || word[j] == 97 + i) {
//				alphabet[i]++;
//			}
//		}
//	}
//	for (int i = 0; i < 26; i++) {
//		if (max < alphabet[i]) {
//			max = alphabet[i];
//			maxAlphabet = i;
//		}
//		else if (max != 0 && max == alphabet[i]) { //alphabet에 1 1 2 ... 이런식으로 들어가 있을때 반례//따라서 max끝까지 구하고 출력 
//			printf("?");//63
//			break;
//		}
//		if (i == 25) {
//			printf("%c", maxAlphabet + 65);
//		}
//	}
//}