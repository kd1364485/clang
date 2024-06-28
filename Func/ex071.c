#include<stdio.h>
int gokei(int a, int b,int c);//プロトタイプ宣言
float heikin(float a, float b, float c);
main()
{
	int a, b,c;
	printf("2つの整数を入力");
	scanf("%d%d%d", &a, &b,&c);
	
	printf("合計 = %d", gokei(a, b, c));
	printf("平均 = %.2f", heikin(a,b,c));
}
int gokei(int a, int b,int c)
{
	return(a+b+c);
}
float heikin(float a, float b, float c)
{
	return((a+b+c)/3.0);
}