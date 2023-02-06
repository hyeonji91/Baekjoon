#include<stdio.h>
#define MAX 10000
int d(int n, int arr[]) {
	int temp, th, hun, tens, ones;
	int r;
	if (n > MAX) {
		return 0;
	}
	else {
		th = n / 1000;
		temp = n%1000;
		hun = temp / 100;
		temp = temp%100;
		tens = temp / 10;
		ones = n % 10;
		
		r = n + th+ hun+ tens + ones;
		if (r <= MAX) {
			arr[r - 1] = r;
			d(r, arr);
		}
	}
}
int main(void) {
	int arr[MAX] = { 0 };
	for (int i = 0; i < MAX; i++) {
		if (arr[i] == 0) {
			d(i+1, arr);
		}
	}
	for (int i = 0; i < MAX; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i+1);
		}
	}
}