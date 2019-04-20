#include <stdio.h>
#include <math.h>

int main19() {
	int arr[] = { 0 };
	int i, j;
	int tmp,sum = 0;
	int count = 0;
	for (i = 1; i <= 100000; i++) {
		for (j = i; j; j /= 10) {
			arr[count] = j % 10;
			count++;
		}
		for (j = 1; j <= count; j++) {
			tmp = pow(arr[j - 1], count);
			sum += tmp;
		}
		if (sum == i) {
			printf("%d\n", i);
		}
		count = 0;
		sum = 0;
	}
	system("pause");
	return 0;
}