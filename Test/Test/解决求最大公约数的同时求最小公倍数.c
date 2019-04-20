#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	int a, b;
	int i,min,max=0;
	int c;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	//计算素数的第一种方法（素数的定义）
#if 1
	min = a < b ? a : b;
	for (i = 2; i < min+1; i++) {
		if (a % i == 0 && b % i == 0){
			max = i;
		}
	}
	if (max == 0) {
		printf("两个数互质!\n");
	}
	else {
		printf("%d和%d的最大公约数为:%d\n", a, b, max);
	}
	//在求出素数的前提下，求最小公倍数
	if (max == 0) {
		printf("%d和%d的最小公倍数为:%d\n", a, b,a*b);
	}
	else {
		printf("%d和%d的最小公倍数为:%d\n", a, b, a*b/max);
	}
#else
	//计算素数的第二种方法（辗转相除法）
	int tmp1,tmp2;
	tmp1 = a;
	tmp2 = b;
	while (c = tmp1%tmp2){
		tmp1 = tmp2;
		tmp2 = c;
	}
	if (tmp2 == 1){
		printf("两个数互质！\n");
	}
	else{
		printf("%d和%d的最大公约数为:%d\n", a, b, tmp2);
	}
	//在求出素数的前提下，求最小公倍数
	if (tmp2 == 1) {
		printf("%d和%d的最小公倍数为:%d\n", a, b,a*b);
	}
	else {
		printf("%d和%d的最小公倍数为:%d\n", a, b, a*b/tmp2);
	}
#endif
	system("pause");
	return 0;
}
