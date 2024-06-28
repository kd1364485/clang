#include<stdio.h>
main()
{
	int  i, k ,su;

	i = 0;
	k = 0;
	

	printf("”‚Í");
	scanf("%d", &su);

	/*for (i = 1; i != -999; i++)
	{
		gokei += k;
		printf("”‚Í");
		scanf("%d", &k);
		
		

	}
	printf("‡Œv = %d",gokei);*/


	for (; su != -999;)
	{
		k += su ;
		printf("”‚Í");
		scanf("%d", &su);
		i++;


	}
	


	if  (i != 0)
	{
		printf("‡Œv%d •½‹Ï%.2f",k,(float)k/i);
		
	}
		



}