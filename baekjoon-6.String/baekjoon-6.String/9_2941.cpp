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
	// //ptr = ptr + 1; //if 밖에 있으면 안됨 17번째 줄에서 검색어가 없다면 이미 NULL임. NULL에서 주소값 +1 하면 0x0...01이 돼서 != NULL이 됨 
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