#include<stdio.h>
main()
{
	int  a;

	printf("整数を入力：");
	scanf("%d", &a);

	if (a == 2)
	{

		printf("最終日は28日です\n");
	}
	else {

		if (a == 4 || a == 6 || a == 9 || a == 11)
		{
			printf("最終日は30日です\n");
		}
		else {
			printf("最終日は31日ですです\n");
		}
	}
}