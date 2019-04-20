#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scanfArray(int a[], int n){
	int i;
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

void printArray(int a[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	putchar('\n');
}

int main4() {
	int a[10], b[10];
	int i, tmp;
	printf("请输入两个数组的值：\n");
	/*for (i = 0; i < 10; i++){
		printf("a[%d]= ", i);
		scanf("%d\t", &a[i]);
	}
	for (i = 0; i < 10; i++){
		printf("b[%d]= ", i);
		scanf("%d\t", &b[i]);
	}*/
	scanfArray(a, 10);
	scanfArray(b, 10);
	for (i = 0; i < 10; i++){
		tmp = a[i]; a[i] = b[i]; b[i] = tmp;
	}
	/*for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	for (i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}*/
	printArray(a, 10);
	printArray(b, 10);
	system("pause");
	return 0;
}