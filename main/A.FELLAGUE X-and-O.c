							/*			Abdelkader FELLAGUE ==>	a.fellague27@gmail.com			*/

#include<stdio.h>
#include"../functions/init.c"
#include"../functions/post.c"
#include"../functions/play.c"
#include"../functions/test2.c"
main()
{
	system("color B0");
	char mat[3][3], c;
	int w = 0, c2 = 0, c1 = 0, s = 0;
	while(c != '.')
	{
		w = 0;
		s = 0;
		init(mat);
		while(s < 10)
		{
			s += 2;
			post(mat);
			play(mat, 1, 'X');
			post(mat);
			w = test2(mat);
			if((w == 1) || (w == 2)) break;
			if(s > 9) break;
			play(mat, 2, 'O');
			post(mat);
			w = test2(mat);
			if((w == 1) || (w == 2)) break;
		}
		if(w == 1)
		{
			c1++;
			printf("The winner is player 1\n\n");
		}
		else 
			if(w == 2)
			{
				c2++;
				printf("The winner is player 2\n\n");
			}
		printf("Continue: press on any button\n\n");
		printf("Quit    : press on '.' : ");
		rewind(stdin);
		scanf("%c", &c);
	}
	if(c1 > c2)			printf("\n\n\t\t\tThe winner is player 1 with %d - %d", c1, c2);
	else 
		if(c2 > c1)		printf("\n\n\t\t\tThe winner is player 2 with %d - %d", c1, c2);
			else 		printf("\n\n\t\t\t\t  No winner %d - %d", c1, c2);
	printf("\n\t\t\t\tThanks for playing \1\n");
	system("pause");
}

