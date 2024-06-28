#include<stdio.h>
#define SIZE 5
main()
{
	int data[SIZE] = { 1,5,4,3,2 };
	int i, j, w;

	for (i = 0;i<SIZE;i++)
	{
		printf("[%d] = %d",i, data[i]);
	}
	//ソート前
	for (i = 0;i<SIZE;i++)
	{
		for (j = i;j>= 0;j--)
		{
			if (data[j]<data[j+1])
			{
				break;
			}
			w = data[j];
			data[j] = data[j + 1];
			data[j + 1] = w;
		}
	}


	printf("\nソート前\n");
	for (i = 0;i<SIZE;i++)
	{
		printf("[%d] = %d",i, data[i]);
	}
	
}