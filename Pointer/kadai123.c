#include<stdio.h>
main()
{
	double a, b;
	double* pa, * pb;
	
	printf("実数値1？");
	scanf("%lf", &a);
	printf("実数値2？");
	scanf("%lf", &b);
	
	pa = &a;
	pb = &b;

	if (*pa<*pb)
	{
		printf("大きいほう　＝%f",*pb);
	}
	else
	{
		printf("大きいほう　＝%f", *pa);
	}


}