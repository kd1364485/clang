#include<stdio.h>
main()
{

	int su, a, b;
	b = 0;
	a = 0;
	printf("整数を入力：");

	while (scanf("%d", &su) != EOF)
	{
		if (a < su)
		{
			a = su;
		}
		else {
			if (b > su)
			{
				b = su;
			}
		}

		printf("整数");

	}
	printf("\n最大値は%d", a);
	printf("\n最小値は%d", b);
}

