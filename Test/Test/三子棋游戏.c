/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_ROW 3
#define MAX_COL 3

char chess_board[MAX_ROW][MAX_COL];

//创建菜单，输入1开始游戏，输入0结束游戏，否则输入无效；
int Menu() {
	printf("##################\n");
	printf("####1.开始游戏####\n");
	printf("####2.结束游戏####\n");
	printf("##################\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(){
	//棋盘使用'x'表示玩家落子；使用'o'表示电脑落子；使用' '表示未落子。
	for (int row = 0; row <= MAX_ROW; row++) {
		for (int col = 0; col <= MAX_COL; col++) {
			chess_board[col][row] = ' ';
		}
	}
}

void Print() {
	for (int row = 0; row < MAX_ROW; row++) {
		printf("| %c | %c | %c |\n", chess_board[row][0], chess_board[row][1], chess_board[row][2]);
		if (row != MAX_ROW - 1){
			printf("|---|---|---|\n");
		}
	}
}

void PlayerMove() {
	while (1){
		int row = 0, col = 0;
		printf("玩家落子！\n");
		printf("请输入您落子的位置（row，col）：");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您输入的位置非法，请重新输入！\n");
			continue;
		}
		if (chess_board[row][col] != ' '){
			printf("您输入的位置已被占用，请重新输入！\n");
			continue;
		}
		chess_board[row][col] = 'x';
		break;
	}
}

void CompulterMove() {
	printf("电脑落子！\n");
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chess_board[row][col] != ' ') {
			continue;
		}
		chess_board[row][col] = 'o';
		break;
	}
}

//棋盘满了返回1，否则返回0
int IsFull() {
	for (int row = 0; row <= MAX_ROW; row++) {
		for (int col = 0; col <= MAX_COL; col++) {
			if (chess_board[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
//函数返回'x'表示玩家胜
//函数返回'o'表示电脑胜
//函数返回'q'表示和棋
//函数返回' '表示游戏尚未结束，继续游戏
char CheckGameOver() {
	int row = 0, col = 0;
	//检查所有行；
	for (row = 0; row < MAX_ROW; row++) {
		if (chess_board[row][0] == chess_board[row][1] && chess_board[row][0] == chess_board[row][2])  {
			return chess_board[row][0];
		}
	}
 	//检查所有列；
	for (col = 0; col < MAX_COL; col++) {
		if (chess_board[0][col] == chess_board[1][col] && chess_board[0][col] == chess_board[2][col]) {
			return chess_board[0][col];
		}
	}
	//检查所有对角线；
	if (chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2]) {
		return chess_board[0][0];
	}
	if (chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0]) {
		return chess_board[0][2];
	}
	if (IsFull()) {
		return 'q';
	}
	return ' ';
}

void Game() {
	char winner = ' ';
	//1、创建一个棋盘并初始化为' '；
	Init();
	while (1) {
		system("cls");
		//2、打印棋盘；
		Print();
		//3、玩家落子；
		PlayerMove();
		Print();
		//4、检测游戏是否结束；
		winner = CheckGameOver();
		if (winner != ' ') {
			break;
		}
		//5、电脑落子；
		CompulterMove();
		//6、检测游戏是否结束。
		winner = CheckGameOver();
		if (winner != ' ') {
			break;
		}
	}
	system("cls");
	Print();
	if (winner == 'x') {
		printf("玩家胜利！\n");
	}
	else if (winner == 'o') {
		printf("电脑胜利！\n");
	}
	else if (winner == 'q') {
		printf("和棋!\n");
	}
	else {
		printf("好像出错了！\n");
	}
}

int main() {
	while (1){
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("结束游戏！\n");
		}
		else {
			printf("你的输入有误，请重新输入!\n");
		}
	}
}*/