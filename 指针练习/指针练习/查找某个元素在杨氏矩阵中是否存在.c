#include <stdio.h>

int FindNum(int* arr[][3], int x, int y, int n) {
	int i = 0, j = y - 1;
	while (i < x && j >= 0) {
		if (arr[i][j] > n) {
			j--;
		}
		else if(arr[i][j] < n)  {
			i++;
		}
		else {
			return 1;
		}
	}
	return 0;
}

int main02() {
	int arr[][3] = {{ 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 }};
	int i = 0, j = 2;
	if (FindNum(arr, 3, 3, 6)) {
		printf("找到了！\n");
	}
	else {
		printf("没找到！\n");
	}
	system("pause");
	return 0;
}