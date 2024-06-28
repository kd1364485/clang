#include<stdio.h>
#define TBLEND 5
int tblgokei4(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tblgokei4(a);
	printf("gokei = %d\n", gokei);
}
int tblgokei4(int *p)
{
	int gokei, i;
	for (gokei = 0,i = 0;i<TBLEND;i++)
	{
		gokei += *(p + i);
	}
	return gokei;
	
}