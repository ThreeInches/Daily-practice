#include <stdio.h>
#include <math.h>

int main1() {
	int i, j, tmp;
	int flag = 0;
	printf("100-200之间的素数为：\n");
	for (i = 100; i < 201; i++) {
		tmp = sqrt(i);
		for (j = 2; j < tmp; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("%d\t", i);
		}
		flag = 0;
	}
	system("pause");
	return 0;
}