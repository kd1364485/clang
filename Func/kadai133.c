#include<stdio.h>
main()
{

	int su, a, b;
	b = 0;
	a = 0;
	printf("®”‚ğ“ü—ÍF");

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

		printf("®”");

	}
	printf("\nÅ‘å’l‚Í%d", a);
	printf("\nÅ¬’l‚Í%d", b);
}

