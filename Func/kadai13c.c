#include<stdio.h>
void kazu(int *a, int *b);
main()
{
	int a, b;
	
	printf("整数を二つ入力");
	scanf("%d%d",&a,&b);
	printf("関数実行前の値\n a = %d b = %d", a, b);
	kazu(&a, &b);
	printf("\n関数実行後の値\n a = %d b = %d",a,b);
}
void kazu(int *a, int *b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}