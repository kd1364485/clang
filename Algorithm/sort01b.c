#include<stdio.h>
#define SIZE 5
main()
{
	int data[SIZE] = { 1,5,4,3,2 };
	int i, j, w;
//ソート前
	for (i = 0;i<SIZE;i++)
	{
		printf("[%d] = %d", i, data[i]);
	}
	j = 0;
	for (i = 0;i<SIZE;i++)
	{
		for (j = 1; j < SIZE; j++)
		{
			if (data[j]>data[j+1])
			{
				w = data[j];
				data[j] = data[j + 1];
				data[j + 1] = w;
			}
			
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("[%d] = %d", i, data[i]);
	}
}