#include<stdio.h>
main()
{
	int a, b, c;

	printf("���Z�q����́F");
	scanf("%d", &a);
	printf("2�̐�������́F");
	scanf("%d%d", &b,&c);
	if (a >= 5)
	{
		printf("5�ȏ�͑��݂��܂���");
	}
	if (a == 4)
	{
		printf("%d\n", b * c);
	}
	if (a == 3)
	{
		printf("%d\n", b * c);
	}
	if (a == 2)
	{
		printf("%d\n", b - c);
	}
	if (a == 1)
	{
		printf("%d\n", b + c);

	}
	if (a <= 0)
	{
		printf("0�ȉ��͑��݂��܂���");
	}
}