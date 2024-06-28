#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} }, j;
	int* ptbl, i;
	ptbl = tbl[0];
	printf("“ñŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 3; j++,ptbl++)
		{
			//printf("%d", *ptbl++);
		}
		printf("\n");
	}
	for (j = 0; j < 3; j++, ptbl++)
	{
		printf("%d", *ptbl);
	}
	
}