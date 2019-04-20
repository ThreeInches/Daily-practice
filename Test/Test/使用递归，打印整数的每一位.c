#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Num(int a) {
	if (a > 9) {
		return num(a / 10);
	}
}

int main34() {
	int a;
	printf("请输入一个整数：\n");
	scanf("%d", &a);
	Num(a);
	printf("%d\t", a % 10);
	system("pause");
	return 0;
}