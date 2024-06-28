#include <stdio.h>
main()
{
	float  sum , box[3];

	int i;

	sum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í");
		scanf("%f", &box[i]);

		sum += box[i];
	}
	printf("‡Œv‚Í%.2f\n",sum);
	printf("•½‹Ï‚Í%.2f\n", sum/i);
}