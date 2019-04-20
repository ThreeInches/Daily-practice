#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//实现函数init（）初始化数;
void init(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}
}

//实现函数empty（）清空数组；
void empty(int arr[], int n) {
	memset(arr, 0, sizeof(arr[0]) * n);
}

//实现函数reverse（）完成数组元素的逆置。
void reverse(int arr[], int n) {
	int left = 0;
	int right = n - 1;
	while (left < right) {
		int tmp;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main23() {
	int arr[] = { 0 };
	int i, n;
	printf("请输入一个一维数组长度：\n");
	scanf("%d", &n);
	printf("请输入一维数组的各项元素：\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	init(arr[i], n);
	empty(arr[i], n);
	reverse(arr[i], n);
	for (i = 0; i <= n; i++) {
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}