#include<stdio.h>
main()
{
	int i;
	char data1[20];
	printf("�������");
	scanf("%s", &data1);
	printf("������%s", data1);
	for (i = 0; data1[i] != '\0'; i++);
	printf("\n��������%d", i);
}