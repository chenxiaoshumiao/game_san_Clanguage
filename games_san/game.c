#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
//
void InitBoard(char board[ROW][COL], int row, int col) {
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++) {
		for(j=0;j<col;j++){
			board[i][j] = ' ';
			
		}
	}

}

void DispalyBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		//��ӡ����(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (j = 0; j < col; j++) {
			//��ӡ��   |   |   ��
			printf(" %c ",board[i][j]);
			if (j < col-1) {
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���Ϣ---|---|---
	
		if (i < ROW - 1) {
			for (j = 0; j < COL; j++) {
				printf("---");
				if(j<COL-1)
				printf("|");
			}
			printf("\n");
		}
		

	}

}
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("���������\n");
	while (1){
		printf("�������������\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�����걻ռ������������");
			}
		}
		else {
			printf("�������̷�Χ����������");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("�õ�������\n");
	while (1) {
		    x = rand() % row;//��˼��0-2
			y = rand() % col;
		
			if (board[x][y] = ' ')
			{
				board[x][y] = '#';
				break;
			}
		
	}
}

