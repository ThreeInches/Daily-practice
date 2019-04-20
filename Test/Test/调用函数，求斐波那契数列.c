/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

int Fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}

#else

int Fib(int n) {
	int last2 = 1;
	int last1 = 1;
	int cur;
	int i;
	if (n == 1 || n == 2) {
		return 1;
	}
	for (i = 3; i <= n; i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

#endif

int main27() {
	int n;
	printf("请输入要计算的斐波那契数列的项数：\n");
	scanf("%d", &n);
	printf("%d\t", Fib(n));
	system("pause");
	return 0;
}*/