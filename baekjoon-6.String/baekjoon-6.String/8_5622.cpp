#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void) {

	char word[16];
	int time[16];
	int wholeT = 0;
	int wordLen;
	scanf("%s", word);
	wordLen = strlen(word);
	for (int i = 0; i < wordLen; i++) {
		if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C') time[i] = 3;
		else if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F') time[i] = 4;
		else if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I') time[i] = 5;
		else if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L') time[i] = 6;
		else if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O') time[i] = 7;
		else if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S') time[i] = 8;
		else if (word[i] == 'V' || word[i] == 'T' || word[i] == 'U') time[i] = 9;
		else time[i] = 10;
	}
	for (int i = 0; i < wordLen; i++) {
		wholeT += time[i];
	}
	printf("%d", wholeT);
}