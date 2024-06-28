#include<stdio.h>
#define SIZE 5
main()
{
	int d[SIZE] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前\n");
	for (i = 0;i<SIZE;i++)
	{
		printf(" [%d] : %d\n",i,d[i]);
	}
	printf("ソート後\n");



	for (i = 0; i < SIZE; i++)
	{
		
		for (j = i +1;j<SIZE;j++)
		{
			if (d[i]>d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;

			}
		}
		printf(" [%d] : %d\n", i, d[i]);
	}
}