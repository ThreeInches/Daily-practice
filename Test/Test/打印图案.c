#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main15() {
	int i, j;
	int n, a;
	printf("请输入要打印的行数：\n");
	scanf("%d",&a);
	n = a / 2 + 1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n - 1; i >= 1; i--) {
		for (j = n - i; j >= 1; j--) {
			putchar(' ');
		}
		for (j = 2 * i - 1; j >= 1; j--) {
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}