#include<stdio.h>
main()
{

	int su, a, b;
	b = 0;
	a = 0;
	printf("��������́F");

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

		printf("����");

	}
	printf("\n�ő�l��%d", a);
	printf("\n�ŏ��l��%d", b);
}

