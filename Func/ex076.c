#include<stdio.h>
void getsumavg(int x, int y, int* wa, float* avg);
main()
{
	int a, b, c;
	float d;
	printf("���l�H�F");
	scanf("%d", &a);
	printf("���l�H�F");
	scanf("%d", &b);
	getsumavg(a, b, &c, &d);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("wa = %d  heikin  = %.2f\n", c, d);
}
void getsumavg(int x, int y, int* wa, float* avg)
{

	*wa = x + y;
	*avg = (x +y)/2.0;
	return;
}