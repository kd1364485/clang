#include<stdio.h>
main()
{
	int a = 100,b = 200,c;
	int* pa, * pb;
	pa = &a;
	pb = &b;
	printf("���s�O�Fa = %d\t b = %d",a,b);

	c = *pa;

	a = *pb;
	b = c;
		;
	printf("���s��Fa = %d\t b = %d", a, b);
}