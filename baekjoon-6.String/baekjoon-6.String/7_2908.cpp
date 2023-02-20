#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int n1, n2;
	int hun1, hun2, tens1, tens2, ones1, ones2, temp;
	int newN1, newN2;

	scanf("%d", &n1);
	scanf("%d", &n2);
	hun1 = n1 / 100;
	temp = n1 % 100;
	tens1 = temp / 10;
	ones1 = temp % 10;

	hun2 = n2 / 100;
	temp = n2 % 100;
	tens2 = temp / 10;
	ones2 = temp % 10;
	
	newN1 = ones1 * 100 + tens1 * 10 + hun1;
	newN2 = ones2 * 100 + tens2 * 10 + hun2;
	
	if (newN1 > newN2) printf("%d", newN1);
	else printf("%d", newN2);
}
