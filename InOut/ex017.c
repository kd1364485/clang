#include <stdio.h>
main()
{
	float a, b, c;
	printf("1つ目の関数");
	scanf("%f",&a);
	printf("2つ目の関数");
	scanf("%f", &b);
	printf("3つ目の関数");
	scanf("%f", &c);
	printf("合計= %.2f",a + b + c);
	printf("平均= %.2f\n",(a + b + c)/3.0);
}