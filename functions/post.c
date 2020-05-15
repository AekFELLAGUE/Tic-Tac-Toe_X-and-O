#include<stdio.h>
void post(char mat[3][3])
{
	system("cls");
	printf("\t\t        Player 1 (X) <======> Player 2 (O)\n\n\n");
	printf("\t\t\t\t     |     |\n");
	printf("\t\t\t\t  %c  |  %c  |  %c", mat[0][0], mat[0][1], mat[0][2]);
	printf("\n\t\t\t\t     |     |\n");
	printf("\t\t\t         ---------------\n");
	printf("\t\t\t\t     |     |\n");
	printf("\t\t\t\t  %c  |  %c  |  %c", mat[1][0], mat[1][1], mat[1][2]);
	printf("\n\t\t\t\t     |     |\n");
	printf("\t\t\t         ---------------");
	printf("\n\t\t\t\t     |     |\n");
	printf("\t\t\t\t  %c  |  %c  |  %c", mat[2][0], mat[2][1], mat[2][2]);
	printf("\n\t\t\t\t     |     |\n\n");
}
