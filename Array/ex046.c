#include <stdio.h>

main()
{
	int  i, j,gokei;
	//配列の先頭要素だけが省略できる
	int a[][3] = { {10,20,30} ,{1,2,3} };

	for (i = 0, gokei = 0; i <1; i++)
	{

		for (j= 0, gokei = 0; j <= 2; j++)
		{
			printf("a[%d][%d] = %d\n",i, j, a[i][j]);
			gokei += a[i][j];
		}
		
	}
	printf("0行目の合計 = %d\n\n", gokei);

	for (j = 0, gokei = 0; j <= 2; j++)
	{
		printf("a[0][%d] = %d\n", j, a[i][j]);
		gokei += a[i][j];
	}
	printf("1行目の合計 = %d\n\n", gokei);
}