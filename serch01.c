#include <stdio.h>
#include <stdlib.h>//乱数を使うときに必要です
#include <time.h>//乱数を使うときに必要です
main()
{
	int data[10] = { 10 , 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;
	srand(time(0));//乱数を初期化する

	printf("探査値を入力");
	scanf("%d",&s);

	
	for (i = 0; i < 10; i++)
	{
		if (s == data[i])
		{
			break;
		}
	}
	if (i == 10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("探査値%dを、data[%d]で発見!\n",s,i);
	}



	


}