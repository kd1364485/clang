#include<stdio.h>
#define SIZE 5
main()
{
	int data[SIZE] = { 2,3,4,5,1 };
	int i, j,w;


	printf("ソート前\n");
	for (i = 0; i < SIZE; i++)
	{
		printf(" [%d] : %d", i, data[i]);
	}

	for (i = 0;i<SIZE;i++)
	{
		for (j = i+1;j<SIZE;j++)
		{
			if (data[i]>data[j])
			{
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0;i<SIZE;i++)
	{
		printf("[%d] : %d",i, data[i]);
	}
	
}