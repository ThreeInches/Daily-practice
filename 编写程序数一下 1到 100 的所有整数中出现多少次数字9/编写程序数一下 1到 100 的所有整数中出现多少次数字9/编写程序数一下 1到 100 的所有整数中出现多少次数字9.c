#include <stdio.h>

int main(){
	int i;
	int count=1;
	for (i = 1; i < 101; i++) {
		//判断个位数是否为9
		if (i % 10 == 9) {
			count++;
		}
		//判断十位数是否为9
		if (i / 10 == 9) {
			count++;
		}
	}
	printf("1-100之间出现9的次数为%d", count);
	system("pause");
	return 0;
}