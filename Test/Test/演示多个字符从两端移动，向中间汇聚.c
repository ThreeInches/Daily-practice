#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 12

int main11() {
	char arr1[SIZE] = "Hello World!";
	char arr2[SIZE] = "############";
	int left = 0;
	int right = SIZE - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		system("cls");
	}
	system("pause");
	return 0;
}