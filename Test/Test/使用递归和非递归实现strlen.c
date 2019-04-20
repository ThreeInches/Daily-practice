#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100

#if 1
int strLen(char a[]) {
	if (a[0] == 0) {
		return 0;
	}
	return strLen(a + 1) + 1;
}

#else
int StrLen(char a[]) {
	int count = 0;
	while (a[count] != '\0') {
		count++;
	}
	return count;
}

#endif
int main32() {
	char a[SIZE];
	gets(a);
	strLen(a);
	int count = strLen(a);
	//int count = StrLen(a);
	printf("%d", count);
	system("pause");
	return 0;
}