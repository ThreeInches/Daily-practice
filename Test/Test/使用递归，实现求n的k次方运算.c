#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Power(int n, int k) {
	if (k < 0) {
		return 0;
	}
	if (k == 0){
		return 1;
	}
	if (k == 1) {
		return n;
	}
	return Power(n, k - 1) * n;
}

int main29() {
	int n, k;
	printf("请输入要计算的数字n和要计算的次方数k：\n");
	scanf("%d %d", &n, &k);
	int i = Power(n, k);
	if (i == 0) {
		printf("您的输入不合法！\n");
	}
	else{
		printf("%d^%d=%d", n, k, i);
	}
	system("pause");
	return 0;
}