#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("���l��3����");
	ret = scanf("%d%d%d",&a,&b,&c);
	printf("ret:%d\t a:%d\t b:%d\t c:%d \n", ret, a, b, c);

	printf("\n����l�����");
	while(scanf("%d",&a) != EOF)
	{
		printf("���l�F%d\n", a);

		printf("����l�����");


	}
}