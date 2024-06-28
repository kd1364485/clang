#include<stdio.h>
main()
{
	int a, b, c;

	printf("ââéZéqÇì¸óÕÅF");
	scanf("%d", &a);
	printf("2Ç¬ÇÃêÆêîÇì¸óÕÅF");
	scanf("%d%d", &b,&c);
	if (a >= 5)
	{
		printf("5à»è„ÇÕë∂ç›ÇµÇ‹ÇπÇÒ");
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
		printf("0à»â∫ÇÕë∂ç›ÇµÇ‹ÇπÇÒ");
	}
}