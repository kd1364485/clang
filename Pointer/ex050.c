#include<stdio.h>
main()
{
	int a = 100, b;
	int* pa;//ポインタ変数の宣言
	pa = &a;//アドレスをセット
	

	printf("a = %d &a = %d\n", a,&a);
	printf("pa = %d *pa = %d &pa = %d\n", pa, *pa, &pa);
}