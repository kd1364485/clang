#include<stdio.h>
main()
{
	int goukei, ia;

	goukei = 0;

	printf("数を入れて：");
    scanf("%d", &ia);
	while (ia != -999)
	{
		goukei += ia;
		printf("数を入れて :");
		scanf("%d", &ia);

	}
	printf("合計 = %d\n", goukei);

}