#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("数値を3つ入力");
	ret = scanf("%d%d%d",&a,&b,&c);
	printf("ret:%d\t a:%d\t b:%d\t c:%d \n", ret, a, b, c);

	printf("\n一つ数値を入力");
	while(scanf("%d",&a) != EOF)
	{
		printf("数値：%d\n", a);

		printf("一つ数値を入力");


	}
}