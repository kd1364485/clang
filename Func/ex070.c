#include<stdio.h>
int add(int a, int b);//プロトタイプ宣言
int hiku(int a, int b);
main()
{
	int a, b, kotae;
	printf("2つの整数を入力");
	scanf("%d%d", &a, &b);

	printf("合計 = %d", add(a, b));
	printf("引き算 = %d", hiku(a, b));
}

int add(int a, int b)
{
	return(a+b);
}
int hiku(int a, int b)
{
	return(a - b);
}
