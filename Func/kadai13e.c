#include<stdio.h>
int getmax(int* pa, int size);
int getmin(int* pa,int size);
main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 },i;

	printf("max%d",getmax( a, 9));
	printf("\nmin%d",getmin( a, 9));
}
int getmax(int* pa, int size)
{
	int i, max;
	for (max = *pa,i = 1;i<size;i++)
	{
		if (max<*(pa+i))
		{
			max = *(pa+i);
		}

	}
	return max;
}

int getmin(int* pa, int size)
{
	int i, min;
	for (min = *pa, i = 1; i < size; i++)
	{
		if (min > *(pa + i))
		{
			min = *(pa+i);
		}
	}
	return min;
}