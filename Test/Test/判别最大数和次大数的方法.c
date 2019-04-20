#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {
	int a[10];
	int i, max, next;
	int tmp;
	printf("请输入十个整数：\n");
	for (i = 1; i < 11; i++) {
		scanf("%d", &a[i]);

	}
	max = a[1];
	next = a[2];
	if (next > max) {
		tmp = max; max = next; next = tmp;
	}
#if	0
	for (i = 3; i < 11; i++) {
		if (a[i]>max) {
			next = max;
			max = a[i];
		}
		else if (a[i]>next){
			next = a[i];
		}
	}
	printf("max=%d\tnext=%d\n", max, next);
#else
	for (i = 3; i<11; i++){
		if (a[i] > max) {
			printf("%d\t%d\t%d\n", a[i], max, next);
		}
		else if (a[i] > next) {
			printf("%d\t%d\t%d\n", max, a[i], next);
		}
		else{
			printf("%d\t%d\t%d\n", max, next, a[i]);
		}
	}
#endif
	system("pause");
	return 0;
}