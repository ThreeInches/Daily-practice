#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main21(){
	int a, b;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	printf("交换后的值为：\n");
	swap(&a, &b);
	printf("a = %d b = %d",a, b);
	system("pause");
	return 0;
}