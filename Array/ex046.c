#include <stdio.h>

main()
{
	int  i, j,gokei;
	//�z��̐擪�v�f�������ȗ��ł���
	int a[][3] = { {10,20,30} ,{1,2,3} };

	for (i = 0, gokei = 0; i <1; i++)
	{

		for (j= 0, gokei = 0; j <= 2; j++)
		{
			printf("a[%d][%d] = %d\n",i, j, a[i][j]);
			gokei += a[i][j];
		}
		
	}
	printf("0�s�ڂ̍��v = %d\n\n", gokei);

	for (j = 0, gokei = 0; j <= 2; j++)
	{
		printf("a[0][%d] = %d\n", j, a[i][j]);
		gokei += a[i][j];
	}
	printf("1�s�ڂ̍��v = %d\n\n", gokei);
}