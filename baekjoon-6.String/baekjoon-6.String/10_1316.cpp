#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char word[101];
	int alphabet[26] = { 0 };
	int wordLen;//word 길이
	int count;// data 개수
	int grpWordCh;//그룹 단어이면 0
	int grpWordCnt = 0; //그룹 단어 개수

	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%s", word);
		wordLen = strlen(word);
		for (int j = 0; j < wordLen; j++) {
			for (int k = 0; k < 26; k++) {
				if (word[j] == 97 + k) {//단어 체크
					if (alphabet[k] == 0) {//첫 등장
						alphabet[k] = 1;
					}
					else alphabet[k] = 2;//두번 이상 등장
					while (word[j] != NULL) {//연속 체크
						if (word[j] == 97 + k) {
							j++;
						}
						else {
							k = -1;//
							break;
						}
					}
				}
				continue;
			}
			grpWordCh = 0;
			for (int k = 0; k < 26; k++) {//두번이상 등장했는지 체크
				if (alphabet[k] == 2)
					grpWordCh = 1;
			}
			if (grpWordCh == 0)//두번이상 등장 알파벳 없으면 그룹 단어임
				grpWordCnt++;
			memset(alphabet, 0, sizeof(int) * 26);
		}
	}
	printf("%d", grpWordCnt);
}