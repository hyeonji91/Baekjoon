#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char word[101];
	int alphabet[26] = { 0 };
	int wordLen;//word ����
	int count;// data ����
	int grpWordCh;//�׷� �ܾ��̸� 0
	int grpWordCnt = 0; //�׷� �ܾ� ����

	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%s", word);
		wordLen = strlen(word);
		for (int j = 0; j < wordLen; j++) {
			for (int k = 0; k < 26; k++) {
				if (word[j] == 97 + k) {//�ܾ� üũ
					if (alphabet[k] == 0) {//ù ����
						alphabet[k] = 1;
					}
					else alphabet[k] = 2;//�ι� �̻� ����
					while (word[j] != NULL) {//���� üũ
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
			for (int k = 0; k < 26; k++) {//�ι��̻� �����ߴ��� üũ
				if (alphabet[k] == 2)
					grpWordCh = 1;
			}
			if (grpWordCh == 0)//�ι��̻� ���� ���ĺ� ������ �׷� �ܾ���
				grpWordCnt++;
			memset(alphabet, 0, sizeof(int) * 26);
		}
	}
	printf("%d", grpWordCnt);
}