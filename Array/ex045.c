#include <stdio.h>

main()
{
	int  i,gokei;
	//配列の先頭要素だけが省略できる
	int a[][3] = { {10,20,30} ,{1,2,3} };
	for(i = 0,gokei = 0;i <= 2;i++)
	{
		printf("a[0][%d] = %d\n",i,a[0][i]);
		gokei += a[0][i];
	}
	printf("0行目の合計 = %d\n\n", gokei);

	for (i = 0, gokei = 0; i <= 2; i++)
	{
		printf("a[1][%d] = %d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("1行目の合計 = %d\n\n", gokei);
}