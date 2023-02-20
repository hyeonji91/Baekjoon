
#include<stdio.h>
#include<string.h>
int main(void) {
	char s[1000001];
	int sLength, wordCnt=0;
	gets_s(s);//백준에서는 gets

	sLength = strlen(s);
	for (int i = 0; i < sLength; i++) {
		if (i==0&&s[i] == ' ') continue;
		else if (i==sLength-1) wordCnt++;
		else if (s[i] == ' ') {
			wordCnt++;
		}
	}
	printf("%d", wordCnt);
}