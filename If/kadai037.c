#include<stdio.h>
main()
{
	int a ;

	printf("0^100‚Ü‚Å‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d", &a);
	if (a >= 90)
	{

		printf("5\n");
	}
	else {

		if (a >= 80 )
		{
			printf("4\n");
		}
		else {
			if (a >= 50 ) {
				printf("3\n");
			}
			else {
				if (a >= 30) {
					printf("2\n");
				}
				else {
					printf("1\n");
				}
			}
		}
		
	}
}
