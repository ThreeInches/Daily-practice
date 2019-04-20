/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	int tmp, j;
	int result = 0;
	tmp = sqrt(n);
	for (j = 2; j < tmp; j++) {
		if (n % j == 0) {
			return 0;
			break;
		}
	}
	return 1;
}

int main25() {
	int n;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	if (isPrime(n)) {
		printf("%d是素数！\n",n);
	}
	else {
		printf("%d不是素数！\n",n);
	}
	system("pause");
	return 0;
}*/