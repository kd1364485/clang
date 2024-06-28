#include <stdio.h>
#include <stdlib.h>//乱数を使うときに必要です
#include <time.h>//乱数を使うときに必要です
main()
{
	int kazu, cpu;

	srand(time(0));//乱数を初期化する


	printf("何を出しますか？\n");
	printf("(1 グー 2 チョキ 3 パー)\n");
	scanf("%d",&kazu);

	
	printf("%d\n", kazu);
	cpu = rand() % 3 + 1;
	


	if (kazu == 1)
	{
		printf("Playerはグーです\n");
	}
	if (kazu == 2)
	{
		printf("Playerはチョキです\n");
	}
	if (kazu == 3)
	{
		printf("Playerはパーです\n");
	}

	if (cpu == 1)
	{
		printf("cpuはグーです\n");
	}
	if (cpu == 2)
	{
		printf("cpuはチョキです\n");
	}
	if ( cpu== 3)
	{
		printf("cpuはパーです\n");
	}
	//じゃんけんの処理
	if (kazu < cpu)
	{
		if (cpu == 3)
		{
			printf("コンピュータの勝ち\n");
		}
		else
		{
			printf("Playerの勝ち\n");
		}
	}

	else
	{
		if (kazu > cpu)
		{
			if (cpu == 1)
			{
				printf("コンピュータの勝ち\n");
			}
			else
			{

				printf("Playerの勝ち\n");
			}
		}
	}
	if (kazu == cpu)
	{
		printf("愛子です\n");
	}

	}