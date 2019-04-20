#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define isSmallLetter(ch) (ch >= 'a' && ch <= 'z')

int isBigLetter(char ch) {
	return ch >= 'A' && ch <= 'Z';
}

//inline int isSmallLetter(char ch) {
//	return ch >= 'a' && ch <= 'z';
//}

int main17() {
	char ch;
	printf("ÇëÊäÈëÒ»´®×Ö·û£º\n");
	while (1) {
		ch = getchar();
		if (ch == '@') {
			break;
		}
		if (isSmallLetter(ch)) {
			putchar(ch - 32);
		}
		else if (isBigLetter(ch)) {
			putchar(ch + 32);
		}
		else {
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}