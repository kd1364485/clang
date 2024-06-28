#include <stdio.h>

main()
{
	int  i, j;

	//”z—ñ‚Ìæ“ª—v‘f‚¾‚¯‚ªÈ—ª‚Å‚«‚é
	float x[3][2],gokei;
	
	


	for (i = 0; i < 3; i++)
	{

		for (j = 0, gokei = 0; j < 2; j++)
		{
			printf("x[%d][%d] = ",i,j);
			scanf("%f", &x[i][j]);
			
			gokei += x[i][j];
		}
		printf("0s–Ú‚Ì•½‹Ï = %.2f\n\n", gokei / j);
	}
}