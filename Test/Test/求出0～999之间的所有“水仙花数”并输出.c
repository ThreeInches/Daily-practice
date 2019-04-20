#include <stdio.h>

int main8() {
	int n;
	int i, j, k;
	int sum = 0, tmpi, tmpj, tmpk ;
	for (n = 0; n < 1000; n++) {
		i = n % 10;
		j = n / 10 % 10;
		k = n / 100;
		tmpi = i*i*i;
		tmpj = j*j*j;
		tmpk = k*k*k;
		sum = tmpi + tmpj + tmpk;
		if (n == sum) {
			printf("%d\n", n);
		}
	}
	/*for (n = 0; n < 100; n++) {
		i = n % 10;
		j = n / 10 % 10;
		tmpi = i*i;
		tmpj = j*j;
		sum = tmpi + tmpj;
		if (n == sum) {
			printf("%d\n", n);
		}
	}*/
	system("pause");
	return 0;
}