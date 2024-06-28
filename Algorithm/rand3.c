#include <stdio.h>
#include <stdlib.h>//乱数を使うときに必要です
#include <time.h>//乱数を使うときに必要です
main()
{
	int kazu;
	srand(time(0));//乱数を初期化する
	kazu = rand() % 101 + 1;

	if (kazu<=30)
	{
		printf("会心の一撃\n");
	}
	else {
		printf("通常攻撃\n");
	}
	


}