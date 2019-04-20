#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int reverse_bit(unsigned int value) {
	int n = 0;
	int i = 0;
	for (i = 31; i > 0; i--) {
		if (value & 1) {
			n = n | (1 << i);
		}
		value = (value >> 1);
	}
	return n;
}

int main01() {
	int value;
	printf("请输入要翻转的整数：");
	scanf("%d", &value);
	if (value != 0) {
		printf("%u", reverse_bit(value));
	}
	system("pause");
	return 0;
}