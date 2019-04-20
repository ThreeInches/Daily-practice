#include <stdio.h>

int main5() {
	int i;
	double sum = 0, tmp, flag = 1;
	for (i = 1; i < 101; i++) {
		//tmp = 1.0 / i*flag*(i % 2 ? 1 : -1);
		tmp = 1.0 / i*flag;
		sum = sum + tmp;
		flag = flag * -1;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}