#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main10() {
	int i, n;
	int tmp = 1, sum = 0;
	printf("请输入要计算的阶乘数：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = tmp*i;
		sum = sum + tmp;
	}
	printf("%d的阶乘是：%d\n", n, tmp);
	printf("%d的前%d的加和是：%d\n", n, n, sum);
	system("pause");
	return 0;
}