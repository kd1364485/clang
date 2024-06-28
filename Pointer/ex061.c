#include<stdio.h>
main()
{
	char data[10] = "Orange";
	char* pdata;
	char* p = "Apple";
	pdata = data;
	printf("data[] = ");
	while (*pdata)
	{
		putchar(*pdata++);
	}
	while (*p)
	{
		putchar(*p++);
	}
	putchar('\n');
}