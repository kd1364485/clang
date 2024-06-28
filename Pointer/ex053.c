#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa, * pb,*w;
	pa = &a,  pb = &b;
	printf("実行前: *pa = %d\t *pb = %d\n",*pa,*pb);
	//ポインタに格納したアドレスを入れ替え
	
	w = pa;
	pa = pb;
	pb = w;

	printf("実行後: *pa = %d\t *pb = %d",*pa,*pb);

}