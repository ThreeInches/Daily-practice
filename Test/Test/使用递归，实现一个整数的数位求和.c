#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DigitSum(int n) {
	if (n > 0) {
		return n % 10 + DigitSum(n / 10);
	}
	return 0;
}

int main30() {
	int i, n;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	i = DigitSum(n);
	if (i == 0) {
		printf("您的输入不合法；\n");
	}
	else {
		printf("%d的数位和是%d", n, i);
	}
	system("pause");
	return 0;
}