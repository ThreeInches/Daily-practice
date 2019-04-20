#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main06() {
	int a[10] = { 1, 5, 2, 3, 4, 1, 6, 3, 4, 2 };
	int i;
	int num1 = 0, num2 = 0, sum = 0;
	int pos;
	for (i = 0; i < 10; i++) {
		sum ^= a[i];
	}
	for (i = 0; i < 32; i++) {
		if (sum & 1 << i) {
			pos = i;
			break;
		}
	}
	for (i = 0; i < 10; i++) {
		if (a[i] & 1 << pos) {
			num1 ^= a[i];
		}
		else {
			num2 ^= a[i];
		}
	}
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}