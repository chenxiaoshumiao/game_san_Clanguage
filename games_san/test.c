#define _CRT_SECURE_NO_WARNINGS
//������������Ϸ
#include"game.h"
void menu() {
	printf("*************************\n");
	printf("******1.play 2.exit******\n");
	printf("*************************\n");
}
     void game() {
		 char board[ROW][COL] = { 0 };
		 //��ʼ��board��ά����
		 InitBoard(board, ROW, COL);
		 //��ӡ����
		 DispalyBoard(board, ROW,COL);
		 while (1) {
			 //�������
			 PlayerMove(board,ROW,COL);
			 //��������
			 ComputerMove(board,ROW,COL);

		 }
}
	 int main() {
		 int input = 0;
		 srand((unsigned int)time(NULL));
		 do {
			 menu();
			 printf("��ѡ��>:");
			 scanf("%d", &input);
			 switch (input) {
			 case 0: {
				 printf("�����˳���Ϸ�����Ժ�......\n");
				 Sleep(3);
				 //endwin();
				 }
		     case 1: {
			     game();
				 break;
				 }
			 default: {
				 printf("ѡ�����������ѡ��\n");
			 }
			 }
		 } while (input);
	 }