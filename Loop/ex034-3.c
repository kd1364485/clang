#include <stdio.h>
main()
{
	int  i, j,save;
	printf("”‚Í");
	scanf("%d", &i);
	save = i + 1;

	do
	{
	j = 0;
		do {
			printf("*");
			j++;
		} while (j < save-i);
		
		printf("\n");
		i--;
	} while (i > 0);

}