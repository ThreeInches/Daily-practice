#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main9() {
	int a, n;
	int i;
	int sum = 0, tmp = 0;
	printf("请输入要计算的数字a:");
	scanf("%d", &a);
	printf("请输入要计算的到前多少项:");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		tmp = tmp * 10 + a;
		sum = sum + tmp;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}