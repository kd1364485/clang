#include<stdio.h>
main()
{
	int  i, k ,su;

	i = 0;
	k = 0;
	

	printf("数は");
	scanf("%d", &su);

	/*for (i = 1; i != -999; i++)
	{
		gokei += k;
		printf("数は");
		scanf("%d", &k);
		
		

	}
	printf("合計 = %d",gokei);*/


	for (; su != -999;)
	{
		k += su ;
		printf("数は");
		scanf("%d", &su);
		i++;


	}
	


	if  (i != 0)
	{
		printf("合計＝%d 平均＝%.2f",k,(float)k/i);
		
	}
		



}