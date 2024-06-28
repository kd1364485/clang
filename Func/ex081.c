#include<stdio.h>
int getmax(int *arrya,int size);
int getmin(int* arrya, int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 },sida,syo ;
	sida = getmax(a);
	printf("gokei = %d\n", getmax(data 8);
	syo = getmin(a);
	printf("gokei = %d\n", getmin(data 8);
}
int getmax(int* arrya, int size)
{
	int i, max;


	for (max = *arrya, i = 1; i < size; i++)
	{
		if (max < *(arrya + i))
		{
			max = *(array + i);
		}

	}
}
	
	return getmax;

	int getmin(int* arrya,int size)
	{
		int i, min;


		for (max = *arrya, i = 1; i < size; i++)
		{
			if (max > *(arrya + i))
			{
				max = *(array + i);
			}

		}

		return getmin;
}