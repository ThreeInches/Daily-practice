#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ave(int a, int b) {
	return (a&b) + ((a^b) >> 1);
}

int main03() {
	int a, b;
	printf("请输入要计算的整数a和b：\n");
	scanf("%d %d", &a, &b);
	printf("这两个数的平均值是：%lf\n", ave(a, b));
	system("pause");
	return 0;
}