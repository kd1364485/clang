#include<stdio.h>
main()
{
	int a;

	printf("西暦を入力：");
	scanf("%d", &a);
	if (a < 1988)
	{
		printf("昭和生まれです\n");
	}
	else {

		printf("平成生まれです\n");
	}
}