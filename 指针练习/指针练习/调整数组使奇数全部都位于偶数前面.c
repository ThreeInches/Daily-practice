#include <stdio.h>

int main01() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0, j = 9;
	int tmp;
	while (arr[i++] % 2 && i < 10);
	while (arr[j--] % 2 == 0 && j >= 0);
	while (i <= j) {
		tmp = arr[i - 1];
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
		while (arr[i++] % 2);
		while (arr[j--] % 2 == 0);
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}