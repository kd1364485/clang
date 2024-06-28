#include <stdio.h>
main()
{
	int  d1,d2,d3,sum;
	char su;
	sum = 0;
	printf("処理を入力");
	scanf("%c",&su);
	printf("整数を入力");
	scanf("%d%d%d", &d1, &d2, &d3);
	sum = d1 + d2 + d3;

	

		switch (su)
		{
		case  'd': 
			if (d1>d2)
		{
			if (d1 > d3)
			{
				printf("最大値は = %d\n", d1);
			}
			else
			{
				printf("最大値は = %d\n", d3);
			}

		}
			else
			{
				if (d2 > d3)
				{
					printf("最大値は = %d\n", d2);
				}
				else
				{
					printf("最大値は = %d\n", d3);
				}
			}
			break;
		case  's': 

			if (d1 < d2)
			{
				if (d1 < d3)
				{
					printf("最小値は = %d\n", d1);
				}
				else
				{
					printf("最小値は = %d\n", d3);
				}

			}
			else
			{
				if (d2 < d3)
				{
					printf("最小値は = %d\n", d2);
				}
				else
				{
					printf("最小値は = %d\n", d3);
				}
			

			break;
		case 'g': printf("合計は = %d\n",sum);
			break;
		case  'h': printf("平均は = %.2f\n",sum/3.0);
			break;
		}
		default:
			printf("処理エラー：");

	}
	

}