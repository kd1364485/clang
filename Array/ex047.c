#include <stdio.h>

main()
{
	int  i, j;

	//配列の先頭要素だけが省略できる
	float x[3][2],gokei;
	
	


	for (i = 0; i < 3; i++)
	{

		for (j = 0, gokei = 0; j < 2; j++)
		{
			printf("x[%d][%d] = ",i,j);
			scanf("%f", &x[i][j]);
			
			gokei += x[i][j];
		}
		printf("0行目の平均 = %.2f\n\n", gokei / j);
	}
}