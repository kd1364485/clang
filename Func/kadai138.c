#include<stdio.h>
int kosu(int a);
main()
{
	int a,i,kazu;
	a = 0;
	printf("®”");
	kazu = kosu(a);
	for (i = 0;i<kazu;i++)
	{
		printf("*");
	}

}
int kosu(int a)
{
	scanf("%d", &a);
	return(a);
}