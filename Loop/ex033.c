#include<stdio.h>
main()
{
	int  i, k ,su;

	i = 0;
	k = 0;
	

	printf("����");
	scanf("%d", &su);

	/*for (i = 1; i != -999; i++)
	{
		gokei += k;
		printf("����");
		scanf("%d", &k);
		
		

	}
	printf("���v = %d",gokei);*/


	for (; su != -999;)
	{
		k += su ;
		printf("����");
		scanf("%d", &su);
		i++;


	}
	


	if  (i != 0)
	{
		printf("���v��%d ���ρ�%.2f",k,(float)k/i);
		
	}
		



}