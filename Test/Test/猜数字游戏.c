#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu() {
	printf("##################\n");
	printf("####1.开始游戏####\n");
	printf("####2.结束游戏####\n");
	printf("##################\n");
}

void game() {
	int a;
	int random_num = rand() % 100 + 1;
	while (1){
		printf("请猜一个1-100之间的数字：");
		scanf("%d", &a);
		if (a < random_num) {
			printf("低了!\n");
		}
		else if (a>random_num) {
			printf("高了!\n");
		}
		else {
			printf("猜对了!\n");
			break;
		}
	}
}

int main14() {
	int i;
	srand((unsigned int)time(0));
	menu();
	while (1){
		printf("请输入你的选择（1表示开始游戏，0表示结束游戏，否则输入无效）：");
		scanf("%d", &i);
		if (i == 1) {
			game();
		}
		else if (i == 0) {
			printf("结束游戏！\n");
		}
		else {
			printf("你的输入有误，请重新输入!\n");
		}
	}
	system("pause");
	return 0;
}