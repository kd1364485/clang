#include<stdio.h>
main()
{
	int ia, a;



	printf("数を入れて：");
	scanf("%d", &ia);

	a = 0;
	
	while (a <= 10)
	{

		printf("%d + %d = %d\n",ia,a,ia + a);
		a++;
	}


}