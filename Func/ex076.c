#include<stdio.h>
void getsumavg(int x, int y, int* wa, float* avg);
main()
{
	int a, b, c;
	float d;
	printf("数値？：");
	scanf("%d", &a);
	printf("数値？：");
	scanf("%d", &b);
	getsumavg(a, b, &c, &d);
	puts("数値と数値の四則演算");
	printf("wa = %d  heikin  = %.2f\n", c, d);
}
void getsumavg(int x, int y, int* wa, float* avg)
{

	*wa = x + y;
	*avg = (x +y)/2.0;
	return;
}