#include <stdio.h>
main()
{
	int i ,su , gokei ;

	i = 0;
	gokei = 0;
	printf("®”(-999)‚ÅI—¹");
	scanf("%d", &su);
	while (su != -999)
	{
		
		gokei += su;
		i++;
		printf("®”(-999)‚ÅI—¹");
		scanf("%d", &su);
	}
	printf("‡Œv = %d\t •½‹Ï = %.2f", gokei, (float)gokei / i);
	
}