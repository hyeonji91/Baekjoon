#include<stdio.h>
#define MAX 10000
void d(int n, int arr[]) {
	int temp, th, hun, tens, ones;//������� �ӽ�����, õ�� �ڸ�, ���� �ڸ�, ���� �ڸ�, ���� �ڸ�
	int r;//n�� �����ڷ� �ؼ� ������� ��

	th = n / 1000;
	temp = n % 1000;
	hun = temp / 100;
	temp = temp % 100;
	tens = temp / 10;
	ones = n % 10;

	r = n + th + hun + tens + ones;

	if (r <= MAX) {
		arr[r - 1] = 1;//�����ѹ��� �ƴ�
	}
}

int main(void) {
	int arr[MAX] = { 0, };
	for (int i = 0; i < MAX; i++) {
			d(i+1, arr);//arr�� �ε����� 0���� ���������� �־��� ������ 1���� 10000���� �̹Ƿ� i+1
	}
	for (int i = 0; i < MAX; i++) {
		if (arr[i] == 0) {//0�̸� �ش� ���� �����ѹ���
			printf("%d\n", i+1);
		}
	}
}