#include <stdio.h>
main()
{
	float  sum , box[3];

	int i;

	sum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("���������");
		scanf("%f", &box[i]);

		sum += box[i];
	}
	printf("���v��%.2f\n",sum);
	printf("���ς�%.2f\n", sum/i);
}