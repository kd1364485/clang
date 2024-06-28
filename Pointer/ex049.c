#include<stdio.h>
main()
{
	int a = 100, b;
	int *pa;//ポインタ変数の宣言
	pa = &a;//アドレスをセット
	b = *pa;
	printf("a = %d b = %d *pa = %d\n",a,b,*pa);
}