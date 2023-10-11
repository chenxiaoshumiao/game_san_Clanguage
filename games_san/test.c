#define _CRT_SECURE_NO_WARNINGS
//测试三子棋游戏
#include"game.h"
void menu() {
	printf("*************************\n");
	printf("******1.play 2.exit******\n");
	printf("*************************\n");
}
     void game() {
		 char board[ROW][COL] = { 0 };
		 //初始化board二维数组
		 InitBoard(board, ROW, COL);
		 //打印棋盘
		 DispalyBoard(board, ROW,COL);
		 while (1) {
			 //玩家下棋
			 PlayerMove(board,ROW,COL);
			 //电脑下棋
			 ComputerMove(board,ROW,COL);

		 }
}
	 int main() {
		 int input = 0;
		 srand((unsigned int)time(NULL));
		 do {
			 menu();
			 printf("请选择>:");
			 scanf("%d", &input);
			 switch (input) {
			 case 0: {
				 printf("正在退出游戏，请稍后......\n");
				 Sleep(3);
				 //endwin();
				 }
		     case 1: {
			     game();
				 break;
				 }
			 default: {
				 printf("选择错误，请重新选择。\n");
			 }
			 }
		 } while (input);
	 }