#include <stdio.h>

int main6() {
	int i;
	int count = 0;
	for (i = 1; i < 1000; i++) {
		if (i % 10 == 9) {
			count++;
		}
		if(i / 10 % 10 == 9) {
			count++;
		}
		if(i / 100 == 9) {
			count++;
		}
	}
	printf("1-1000之间出现9的次数为：%d", count);
	system("pause");
	return 0;
}