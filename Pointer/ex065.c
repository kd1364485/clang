#include<stdio.h>
main()
{
	int i,j;
	char* ptbl[4] = { "programming2", "Algorithm", "progrmming1","C"};
	char* pwork;
	i = 0;
	j = 0;
	
	for (i = 0; i < 3; i++)
	{
		
		for(j = i + 1; j < 4; j++)
		{
			
			if(strcmp(ptbl[i],ptbl[j])>0)
			{
				pwork = ptbl[i];
				ptbl[i] = ptbl[j];
				ptbl[j] = pwork;
			}
		}
		
	}
	
	//Œ‹‰Ê•\Ž¦
	for (i = 0;i<4;i++)
	{
		printf("%s\n",ptbl[i]);
	}
}