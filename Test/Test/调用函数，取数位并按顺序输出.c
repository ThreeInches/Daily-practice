#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void num(int a) {
	if (a > 9) {
		num(a / 10);
	}
	printf("%d\t", a % 10);
}

int main25() {
	int a;
	printf("请输入一个整数：\n");
	scanf("%d", &a);
	num(a);
	system("pause");
	return 0;
}