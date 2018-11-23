#include "game.h"
char arr[ROW][COL] = { 0 };
void qipan(char arr[ROW][COL],int a ,int b)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < ROW; j++)
	{
		for (i = 0; i < COL; i++)
		{
			printf(" %c ", arr[j][i]);
			if (i < (COL - 1))
			{
				printf("|");
			}
		}
		printf("\n");
		if (j < ROW - 1)
		{
			for (i = 0; i < COL; i++)
			{
				printf("---");
				if (i < (COL - 1))
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void play_go(char arr[ROW][COL], int row, int col) 
{
	printf("����������(�ո������\n"); 
	int m = 0, n = 0;
	while (1)
	{
		scanf("%d %d", &m, &n);
		if (((m >= 1) && (m <= 3)) && ((n >= 1) && (n <= 3)))
		{
			if (arr[m - 1][n - 1] == '\0')
			{
				arr[m - 1][n - 1] = 'X';
				break;
			}
			else
			{
				printf("�������");
			}
		}
		else
		{
			printf("�������2\n");
		}
	}
}
void com_go(char arr[ROW][COL], int row, int col){
	int a=0;
	int b=0;
	while (1)
	{
		a = rand() % 3;
		b= rand() % 3;
		if (arr[a][b] == '\0')
		{
			arr[a][b] = '0';
			break;
		}
	}
}
char whowin(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < ROW; i++)
	{

		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != '\0') //�����
			return arr[i][1];
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != '\0') //�����
			return arr[1][i];
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != '\0') //��б���
			return arr[1][1];
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != '\0') //��б���
			return arr[1][1];
	}
	for (i = 0; i < ROW; i++)//ƽ�����
	{
		for (j = 0; j <COL; j++)
		{
			if (arr[i][j] == 'X' || arr[i][j] == '0')
				count++;
			if (count == 9)
				return 'q';
		}
	}
	return 'm';
}
void game()
{
	char a = 0;
	char arr[ROW][COL] = { 0 };
	qipan(arr, ROW, COL);
	while (1)
	{
		play_go(arr, ROW, COL);//�����
		qipan(arr, ROW, COL);
		a = whowin(arr, ROW, COL);
		if (a == 'X')
		{
			printf("���Ӯ\n");
			break;
		}
		else if (a == '0')
		{
			printf("����Ӯ\n");
			break;
		}
		else if (a == 'q')
		{
			printf("ƽ��\n");
			break;
		}
		printf("�����£�\n");
		com_go(arr, ROW, COL);//������
		qipan(arr, ROW, COL);
		a=whowin(arr, ROW, COL);
		if (a == 'x')
		{
			printf("���Ӯ\n");
			break;
		}
		else if (a =='0')
		{
			printf("����Ӯ\n");
			break;
		}
		else if (a == 'q')
		{
			printf("ƽ��\n");
			break;
		}
	}

}