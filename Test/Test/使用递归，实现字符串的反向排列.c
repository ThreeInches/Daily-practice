#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define SIZE 10

void reverse_string(int length, char a[]) {
	if (length == 0) {
		return;
	}
	int index = length - 1;
	printf("%c", a[index]);
	reverse_string(index, a);
}

int main31(){
	char a[SIZE];
	int length = SIZE;
	for (int i = 0; i < SIZE; i++) {
		scanf("%c", &a[i]);
	}
	reverse_string(length, a);
	system("pause");
	return 0;
}