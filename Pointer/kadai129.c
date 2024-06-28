#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 }, i,w[30];
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb;
	pa = a;
	pb = b;
	printf("配列a[] = ");
	for (i = 0; i < 10; i++)
	{
		
		printf(" %d", a[i]);
	}
	

	printf("\n配列ｂ[] = ");
	for (i = 0; i < 10; i++)
	{

		printf("  %d", b[i]);
	}
	//入れ替え処理1
	printf("\n配列a[] = ");
	for (i = 0; i < 10; i++, pa++ , pb++)
	{
		w[i] = *pa;
		*pa = *pb;
		printf(" %d", *pa);

	}
	//pbを0要素から処理するために「ｂ」(要素0番目)をpbに代入して入れ替え処理1で行ったpbの要素を
	//要素0番目から処理したいので「ｂ」を代入することによって要素0番目からしょりする
	printf("\n配列b[] = ");
	for (i = 0,pb = b ; i < 10; i++, pb++)
	{
		*pb = w[i];
		printf(" %d", *pb);

	}
	
}