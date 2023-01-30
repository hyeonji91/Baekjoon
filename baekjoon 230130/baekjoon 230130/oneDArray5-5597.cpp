#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {//in
	//int stdNum[30]={0}, num[28];
	//for (int i = 0; i < 28; i++) {
	//	scanf("%d", &num[i]);
	//}
	//for (int i = 0; i < 30; i++) {
	//	for (int j = 0; j < 28; j++) {
	//		if (i+1 == num[j]) {
	//			stdNum[i]=num[j];
	//		}
	//	}
	//}
	//for (int i = 0; i < 30; i++) {
	//	if (stdNum[i] == 0)
	//		printf("%d\n", i+1);
	//}

	int stdNum[30] = { 0 };
	int index;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &index);
		stdNum[index - 1] = index;
	}
	for (int i = 0; i < 30; i++) {
		if (stdNum[i] == 0) {
			printf("%d\n", i + 1);
		}
	}
	return 0;
}