int test2(char mat[3][3])
{
		if((mat[0][0] == mat[0][1]) && (mat[0][1] == mat[0][2])) if(mat[0][0] == 'X') return 1;
			else return 2;
		else if((mat[1][0] == mat[1][1]) && (mat[1][1] == mat[1][2])) if(mat[1][0] == 'X') return 1;
				else return 2;
			else if((mat[2][0] == mat[2][1]) && (mat[2][1] == mat[2][2])) if(mat[2][0] == 'X') return 1;
					else return 2;
				else if((mat[0][0] == mat[1][1]) && (mat[1][1] == mat[2][2])) if(mat[0][0] == 'X') return 1;
						else return 2;
					else if((mat[2][0] == mat[1][1]) && (mat[1][1] == mat[0][2])) if(mat[2][0] == 'X') return 1;
							else return 2;
						else if((mat[0][0] == mat[1][0]) && (mat[1][0] == mat[2][0])) if(mat[0][0] == 'X') return 1;
								else return 2;
							else if((mat[0][1] == mat[1][1]) && (mat[1][1] == mat[2][1])) if(mat[0][1] == 'X') return 1;
									else return 2;
								else if((mat[0][2] == mat[1][2]) && (mat[1][2] == mat[2][2])) if(mat[0][2] == 'X') return 1;
										else return 2;
}
