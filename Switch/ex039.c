#include <stdio.h>
main()
{
	int  d1,d2,d3,sum;
	char su;
	sum = 0;
	printf("���������");
	scanf("%c",&su);
	printf("���������");
	scanf("%d%d%d", &d1, &d2, &d3);
	sum = d1 + d2 + d3;

	

		switch (su)
		{
		case  'd': 
			if (d1>d2)
		{
			if (d1 > d3)
			{
				printf("�ő�l�� = %d\n", d1);
			}
			else
			{
				printf("�ő�l�� = %d\n", d3);
			}

		}
			else
			{
				if (d2 > d3)
				{
					printf("�ő�l�� = %d\n", d2);
				}
				else
				{
					printf("�ő�l�� = %d\n", d3);
				}
			}
			break;
		case  's': 

			if (d1 < d2)
			{
				if (d1 < d3)
				{
					printf("�ŏ��l�� = %d\n", d1);
				}
				else
				{
					printf("�ŏ��l�� = %d\n", d3);
				}

			}
			else
			{
				if (d2 < d3)
				{
					printf("�ŏ��l�� = %d\n", d2);
				}
				else
				{
					printf("�ŏ��l�� = %d\n", d3);
				}
			

			break;
		case 'g': printf("���v�� = %d\n",sum);
			break;
		case  'h': printf("���ς� = %.2f\n",sum/3.0);
			break;
		}
		default:
			printf("�����G���[�F");

	}
	

}