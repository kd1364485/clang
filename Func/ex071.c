#include<stdio.h>
int gokei(int a, int b,int c);//�v���g�^�C�v�錾
float heikin(float a, float b, float c);
main()
{
	int a, b,c;
	printf("2�̐��������");
	scanf("%d%d%d", &a, &b,&c);
	
	printf("���v = %d", gokei(a, b, c));
	printf("���� = %.2f", heikin(a,b,c));
}
int gokei(int a, int b,int c)
{
	return(a+b+c);
}
float heikin(float a, float b, float c)
{
	return((a+b+c)/3.0);
}