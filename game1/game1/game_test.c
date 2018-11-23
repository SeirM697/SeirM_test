#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("**********1.paly**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
}
void test()
{
	srand(time(NULL));
	int a = 0;
	while (1) {
		scanf("%d", &a);
		switch (a) {
		case 1:
			game();
			break;
		case 0:
			exit(0);
		default:
			printf("输入错误，请重新输入\n");
			exit(1);
		}
	}

}
int main()
{

	menu();
	test();
	return 0;
}