#include <stdio.h>
#include <stdlib.h>//乱数を使うときに必要です
#include <time.h>//乱数を使うときに必要です
main()
{
	int kazu, i;

	srand(time(0));//乱数を初期化する
	

	printf("今日のあなたの運勢は");
	for (i = 0; i <= 100; i++)
	{
		kazu = rand() % 300 + 1;
		printf("%d\n",kazu);
	}
	printf("です");

}