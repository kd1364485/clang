#include <stdio.h>
#include <stdlib.h>//乱数を使うときに必要です
#include <time.h>//乱数を使うときに必要です
main()
{
	int  data[20];
	int i, target, work;
	srand(time(0));//乱数を初期化する

	for (i = 0; i < 20; i++)
	{
		data[i] = i+1;
	}
	//確認用の表示
	printf("\n----------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}
	//シャッフル1
	//最初のｎ番目にある要素がシャッフル処理後に
	//n番目に配置されてしまう
	for (i = 0; i < 20; i++)
	{

		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;

	}
	//確認用の表示
	printf("\n----------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}
	
}