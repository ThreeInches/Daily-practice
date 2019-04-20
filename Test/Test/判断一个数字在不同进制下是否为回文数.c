#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main18() {
	int i;
	int n, sn;
	int tmp, sum = 0;
	printf("请输入一个sn进制的数字n\n");
	scanf("%d %d", &sn, &n);
	for (i = n; i; i /= sn) {
		tmp = i%sn;
		sum = sum*sn + tmp;
	}
	if (sum == n) {
		printf("%d在%d进制下是回文数\n", n, sn);
	}
	else {
		printf("%d在%d进制下 不是回文数\n", n, sn);
	}
	system("pause");
	return 0;
}