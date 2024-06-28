#include <stdio.h>
main()
{
	int i, gokei;

	i = 0;
	gokei = 0;
	
	while (gokei <= 300)
	{

		
		i++;
		
		gokei += i;
		printf("%d +", i );
	}
	printf(" = %d\t",  gokei += i);
	
}