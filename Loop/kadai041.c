#include <stdio.h>
main()
{
	int i ,su , gokei ;

	i = 0;
	gokei = 0;
	printf("����(-999)�ŏI��");
	scanf("%d", &su);
	while (su != -999)
	{
		
		gokei += su;
		i++;
		printf("����(-999)�ŏI��");
		scanf("%d", &su);
	}
	printf("���v = %d\t ���� = %.2f", gokei, (float)gokei / i);
	
}