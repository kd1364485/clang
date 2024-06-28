#include<stdio.h>
main()
{
	int itbl[3] = { 10,20,30 };
	int* pitbl;
	double dtbl[3] = { 10.0,20.0,30.0 };
	double* pdtbl;

	pitbl = itbl;
	printf("*pitbl = %d\t", *pitbl);
	pitbl++;
	printf("%d\t",  *pitbl);
	pitbl++;
	printf("%d\n", *pitbl);

	pdtbl = dtbl;
	printf("*pdtbl = %.1f\t",*pdtbl);
	pdtbl++;
	printf("%.1f\t", *pdtbl);
	pdtbl++;
	printf("%.1f\n", *pdtbl);	
}