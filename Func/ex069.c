#include<stdio.h>
main()
{
	
	int sum,a,i;
	i = 0;
	sum = 0;
	printf("��������́F");
	while (scanf("%d",&a) != EOF)
	{
		
		sum += a;
		i++;
		printf("����");
		
	}
	printf("���v=%d\t���� = %.2f", sum, (float)sum / i);
}