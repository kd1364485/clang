#include<stdio.h>
main()
{
	double a, b;
	double* pa, * pb;
	
	printf("�����l1�H");
	scanf("%lf", &a);
	printf("�����l2�H");
	scanf("%lf", &b);
	
	pa = &a;
	pb = &b;

	if (*pa<*pb)
	{
		printf("�傫���ق��@��%f",*pb);
	}
	else
	{
		printf("�傫���ق��@��%f", *pa);
	}


}