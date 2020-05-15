#include<stdio.h>
#include"test1.c"
#include"fill.c"
void play(char mat[3][3],int d,char c)
{
	int pos,v=0;
	do
	{
		printf("\nChoose your position player %d: ", d);
		while(!scanf("%d", &pos))
		{
			printf("\nEnter an integer");
			rewind(stdin);
		}
		v = test1(mat, pos);
	}while((pos < 1) || (pos > 9) || (v == 1));
	fill(mat, pos, c);
}
