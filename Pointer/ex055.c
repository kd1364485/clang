#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 },sum,i;
	float b[] = { 11.1,22.2,33.3,44.4 },avg,gokei;
	int* pa;
	float* pb;
	avg = 0;
	sum = 0;
	gokei = 0;
	pa = a;
	for (i = 0;i<6;i++,pa++)
	{
		sum += *pa;
	}
	printf("�z��a ���v = %d�@���� = %.3f", sum, (float)sum / 6);

	sum = 0;
	pb = b;
	for (i = 0;i<4;i++,pb++)
	{
		gokei += *pb;
	}
	printf("�z��b ���v = %.3f�@���� = %.3f", gokei, gokei / 4);
	/*sum += *pa;
	pa++;
	sum += *pa;
	pa++;
	sum += *pa;
	pa++;
	sum += *pa;
	pa++;
	sum += *pa;
	pa++;
	sum += *pa;
	avg = sum / 6;
	sum = 0;
	pb = b;*/


	//printf("�z��a ���v = %d�@���� = %.3f",sum,(float)sum/6);

	//pb = b;

	
	
}