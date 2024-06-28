#include<stdio.h>
#define SIZE 5
main()
{
	int data[5] = { 2,3,5,4,1 };
	int i, j, w;
	//ソート前
	for (i = 0;i<SIZE;i++)
	{
		printf("[%d] = %d\t",i,data[i]);
	}


	for (i = SIZE-1;i>=0;i--)
	{
		for (j = 0;j<SIZE;j++)
		{
			if (data[j]>data[j+1])
			{
				w = data[j];
				data[j] = data[j + 1];
				data[j + 1] = w;
			}
			
		}
	}
	//ソート後

	printf("\nソート後\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("[%d] = %d", i, data[i]);
	}
}