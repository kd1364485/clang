#include<stdio.h>
void kazu(int *a, int *b);
main()
{
	int a, b;
	
	printf("����������");
	scanf("%d%d",&a,&b);
	printf("�֐����s�O�̒l\n a = %d b = %d", a, b);
	kazu(&a, &b);
	printf("\n�֐����s��̒l\n a = %d b = %d",a,b);
}
void kazu(int *a, int *b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}