#include <stdio.h>
main()
{
	int su, gokei;

	gokei = 0;

	while (1)//�������[�v
	{
		printf("���������");
		scanf("%d", &su);
		if (su == -999) 
		{
			break;//���[�v��E�o
		}
		gokei += su;

	}
	printf("���v = %d\n",gokei);
}