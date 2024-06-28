#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 },i,sum;
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb;
	pa = a;
	pb = b;
	printf("”z—ñ‚‚[] = ");
	for (i = 0;i<10;i++,pa++, pb++)
	{

		sum = *pa + *pb;
		
		printf("%d ",sum);
	}
}