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
	//�\�[�g�O
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


	printf("\n�\�[�g�O\n");
	for (i = 0;i<SIZE;i++)
	{
		printf("[%d] = %d",i, data[i]);
	}
	
}