#include<stdio.h>
main()
{
	
	int sum,a,i;
	i = 0;
	sum = 0;
	printf("整数を入力：");
	while (scanf("%d",&a) != EOF)
	{
		
		sum += a;
		i++;
		printf("整数");
		
	}
	printf("合計=%d\t平均 = %.2f", sum, (float)sum / i);
}