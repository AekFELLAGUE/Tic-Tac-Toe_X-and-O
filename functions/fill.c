void fill(char mat[3][3], int pos, char c)
{
	switch(pos)
	{
			case 1:	mat[0][0] = c;
					break;
			case 2:	mat[0][1] = c;
					break;
			case 3:	mat[0][2] = c;
					break;
			case 4:	mat[1][0] = c;
					break;
			case 5:	mat[1][1] = c;
					break;
			case 6:	mat[1][2] = c;
					break;
			case 7:	mat[2][0] = c;
					break;
			case 8:	mat[2][1] = c;
					break;
			case 9:	mat[2][2] = c;
					break;
	}
}
