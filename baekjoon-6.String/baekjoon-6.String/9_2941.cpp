#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	char word[101];
	int wordLen;
	scanf("%s", word);
	wordLen = strlen(word);
	
	char* ptr = (char*)malloc(sizeof(char) * 101);
	ptr = word;

	////ver2
	//while (ptr != NULL) {
	//	ptr = strstr(ptr, "c=");
	//	if (NULL != ptr) {
	//		wordLen -= 1;
	//		ptr = ptr + 1;
	//	}
	// //ptr = ptr + 1; //if �ۿ� ������ �ȵ� 17��° �ٿ��� �˻�� ���ٸ� �̹� NULL��. NULL���� �ּҰ� +1 �ϸ� 0x0...01�� �ż� != NULL�� �� 
	//}

	ptr = word;
	while (ptr != NULL) {
		ptr = strstr(ptr, "c-");
		if (NULL != ptr) {
			wordLen -= 1;
			ptr = ptr + 1;
		}
	}

	ptr = word;
	while (ptr != NULL) {
		ptr = strstr(ptr, "dz=");
		if (NULL != ptr) {
			wordLen -= 2;
			ptr = ptr + 1;
		}
	}
	ptr = word;
	while (ptr != NULL) {
		ptr = strstr(ptr, "d-");
		if (NULL != ptr) {
			wordLen -= 1;
			ptr = ptr + 1;
		}
	}
	ptr = word;
	while (ptr != NULL) {
		ptr = strstr(ptr, "lj");
		if (NULL != ptr) {
			wordLen -= 1;
			ptr = ptr + 1;
		}
	}
	ptr = word;
	while (ptr != NULL) {
		ptr = strstr(ptr, "nj");
		if (NULL != ptr) {
			wordLen -= 1;
			ptr = ptr + 1;
		}
	}
	ptr = word;
	while (ptr != NULL) {
		ptr = strstr(ptr, "s=");
		if (NULL != ptr) {
			wordLen -= 1;
			ptr = ptr + 1;
		}
	}
	ptr = word;
	while (ptr != NULL) {
		ptr = strstr(ptr, "z=");
		if (NULL != ptr) {
			wordLen -= 1;
			ptr = ptr + 1;
		}
	}

	printf("%d", wordLen);
}