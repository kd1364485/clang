#include<stdio.h>
main()
{
	int a, b, c;

	printf("演算子を入力：");
	scanf("%d", &a);
	printf("2つの整数を入力：");
	scanf("%d%d", &b,&c);
	if (a >= 5)
	{
		printf("5以上は存在しません");
	}
	if (a == 4)
	{
		printf("%d\n", b * c);
	}
	if (a == 3)
	{
		printf("%d\n", b * c);
	}
	if (a == 2)
	{
		printf("%d\n", b - c);
	}
	if (a == 1)
	{
		printf("%d\n", b + c);

	}
	if (a <= 0)
	{
		printf("0以下は存在しません");
	}
}