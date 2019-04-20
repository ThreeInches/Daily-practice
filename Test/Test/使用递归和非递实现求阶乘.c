#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 1
int Factorial(int n) {
	int tmp = 1;
	while (n > 0) {
		if (n < 0) {
			return 0;
		}
		else {
			tmp = tmp * n;
			n--;
		}
	}
	return tmp;
}

#else
int factorial(int n) {
	if (n <= 1) {
		return 0;
	}
	return n * factorial(n - 1);
}

#endif
int main33() {
	int n;
	printf("请输入要计算的阶乘数：\n");
	scanf("%d", &n);
	//更改为factorial（）可以实现递归调用的方法
	printf("%d!=%d", n, Factorial(n));
	system("pause");
	return 0;
}