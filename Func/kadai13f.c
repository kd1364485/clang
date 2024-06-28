#include<stdio.h>
void syou(int tbl[], int size);
void kou(int tbl[], int size);
main()
{
	int i, data[9] = { 10,25,7,45,2,100,3,70,50 };
	int s;
	printf("ソート方法　：");
	scanf("%d",&s);
	if (s == 1)
	{
		syou(data, 9);
	}
	else
	{
		kou(data, 9);
	}
	for (i = 0;i<9;i++)
	{
		printf("%d\t",data[i]);
	}
}
void syou(int tbl[], int size)
{
	int w,i,j;
	for (i = 0;i<size;i++)
	{
		for (j = i+1;j<size;j++)
		{
			if (tbl[i] > tbl[j])
			{
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
	return;
}
void kou(int tbl[], int size)
{
	int w, i, j;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (tbl[i] < tbl[j])
			{
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
	return;
}