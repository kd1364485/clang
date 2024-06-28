#include <stdio.h>
main()
{
	int su, gokei;

	gokei = 0;

	while (1)//無限ループ
	{
		printf("数をいれて");
		scanf("%d", &su);
		if (su == -999) 
		{
			break;//ループを脱出
		}
		gokei += su;

	}
	printf("合計 = %d\n",gokei);
}