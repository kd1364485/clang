#include <stdio.h>
main()
{
	int a[3], * p;
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p = %d", *p);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("\n*p = %d", *p + 1);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("\n*p = %d", *(p + 1));
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("\n*p = %d", *p += 1);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("\n*p = %d", *p++);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("\n*p = %d", (*p)++);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("\n*p = %d", *++p);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("\n*p = %d", ++*p);
	
}