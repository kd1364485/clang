#include<stdio.h>
main()
{
	int  i ,k ;


	/*カウンタに初期値セット
	  10以下の間は実行してね
	  処理したら+1カウント*/
	k = 0;
	for (i = 1; i <= 10; i++)
	{

		printf("1から%dまでの和 = %d\n",i,k += i);
		
	}
	


}