#include<stdio.h>
#define MAX 10000
void d(int n, int arr[]) {
	int temp, th, hun, tens, ones;//순서대로 임시저장, 천의 자리, 백의 자리, 십의 자리, 일의 자리
	int r;//n을 생성자로 해서 만들어진 수

	th = n / 1000;
	temp = n % 1000;
	hun = temp / 100;
	temp = temp % 100;
	tens = temp / 10;
	ones = n % 10;

	r = n + th + hun + tens + ones;

	if (r <= MAX) {
		arr[r - 1] = 1;//셀프넘버가 아님
	}
}

int main(void) {
	int arr[MAX] = { 0, };
	for (int i = 0; i < MAX; i++) {
			d(i+1, arr);//arr의 인덱스는 0부터 시작하지만 주어진 조건은 1부터 10000까지 이므로 i+1
	}
	for (int i = 0; i < MAX; i++) {
		if (arr[i] == 0) {//0이면 해당 수가 셀프넘버임
			printf("%d\n", i+1);
		}
	}
}