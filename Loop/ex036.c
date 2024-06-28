#include <stdio.h>
main()
{
	int i;
	printf("break test program");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)
		{
			break;
		}
		printf("%d",i);
	}
	printf("continue test program");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)
		{
			continue;//‰º‚Ìˆ—‚ð”ò‚Î‚·
		}
		printf("%d", i);
	}
}
