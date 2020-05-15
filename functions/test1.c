int test1(char mat[3][3], int pos)
{
	int v = 0;
	switch(pos)
	{
		case 1:	if((mat[0][0] == 'X') || (mat[0][0] == 'O')) v = 1;
				break;
		case 2:	if((mat[0][1] == 'X') || (mat[0][1] == 'O')) v = 1;
				break;
		case 3:	if((mat[0][2] == 'X') || (mat[0][2] == 'O')) v = 1;
				break;
		case 4:	if((mat[1][0] == 'X') || (mat[1][0] == 'O')) v = 1;
				break;
		case 5:	if((mat[1][1] == 'X') || (mat[1][1] == 'O')) v = 1;
				break;
		case 6:	if((mat[1][2] == 'X') || (mat[1][2] == 'O')) v = 1;
				break;
		case 7:	if((mat[2][0] == 'X') || (mat[2][0] == 'O')) v = 1;
				break;
		case 8:	if((mat[2][1] == 'X') || (mat[2][1] == 'O')) v = 1;
				break;
		case 9:	if((mat[2][2] == 'X') || (mat[2][2] == 'O')) v = 1;
				break;
	}
	return v;
}
