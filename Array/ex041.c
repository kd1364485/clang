#include <stdio.h>
main()
{
	float  sum , box[3];

	int i;

	sum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("実数を入力");
		scanf("%f", &box[i]);

		sum += box[i];
	}
	printf("合計は%.2f\n",sum);
	printf("平均は%.2f\n", sum/i);
}