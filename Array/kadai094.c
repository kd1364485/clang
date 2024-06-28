#include <stdio.h>
main()
{
	int a, b;

	while (1)
	{
		printf("®”1(-999‚ÅI—¹)");
		scanf("%d", &a);
		printf("®”2(-999‚ÅI—¹)");
		scanf("%d", &b);
		if (a == -999 || b == -999)
		{
			break;
		}
		if (b == 0) {
			continue;
		}
		else {
			printf("%d/%d = %d‚ ‚Ü‚è%d\n", a, b, a / b, a % b);
		}
	}
}