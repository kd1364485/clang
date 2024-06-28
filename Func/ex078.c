#include<stdio.h>
int tblgokei1(int* p);
int tblgokei2(int tbl[]);
main()
{
	int a[] = { 10,20,30,40,-999 },gokei;
	gokei = tblgokei1(a);
	printf("gokei = %d\n",gokei);
	gokei = tblgokei2(a);
	printf("gokei = %d\n", gokei);
}
int tblgokei1(int* p)
{
	int gokei = 0;
	while (*p != -999)
	{
		gokei += *p;
		p++;
	}
	return(gokei);
}
int tblgokei1(int tbl[])
{
	int gokei = 0, i = 0;
	while (tbl[i] != -999)
	{
		gokei += tbl[i];
		i++;
	}
	return(gokei);
}