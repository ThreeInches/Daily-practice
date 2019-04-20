#include <stdio.h>
#include <string.h>

void reverse_string(char* str,int i, int j) {
	char tmp;
	while (i < j) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

void reverse_word1(char* str) {
	int i;
	int start = 0, end = 0;
	for (i = 0; str[i]; i++) {
		if (str[i] == ' ') {
			end = i - 1;
			reverse_string(str, start, end);
			start = i + 1;
		}
	}
	reverse_string(str, start, i - 1);
	reverse_string(str, 0, i - 1);
}

int main07() {
	char str[] = "i am a student";
	reverse_word1(str);
	puts(str);
	system("pause");
	return 0;
}