#include <stdio.h>
#include <stdlib.h>//乱数を使うときに必要です
#include <time.h>//乱数を使うときに必要です
main()
{
	/*int dice;
	srand(time(0));//乱数を初期化する
	dice = rand() % 6 + 1;
	printf("サイコロは % dです\n", dice);*/

	/*int b;

	srand(time(0));//乱数を初期化する
	b = rand() %41 + 10;
	printf("サイコロは % dです\n", b);*/

	int c;

	srand(time(0));//乱数を初期化する
	c = rand() %301-100;
	printf("サイコロは % dです\n", c);
}