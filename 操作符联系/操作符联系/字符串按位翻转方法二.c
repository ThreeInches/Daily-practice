#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_word2(char * str)
{
	char tmp[256] = { 0 };
	char * p;

	while (p = strrchr(str, ' '))
	{
		strcat(tmp, p + 1);
		strcat(tmp, " ");
		*p = 0;
	}
	strcat(tmp, str);
	strcpy(str, tmp);
}

int main08() {
	char str[] = "i am a student";
	reverse_word2(str);
	puts(str);
	system("pause");
	return 0;
}