#include<stdio.h>
main()
{
	char data1[] = "Gamesoft";
	printf("������%s", data1);
	int i;
	for (i = 0; data1[i] != '\0'; i++);
	printf("\n��������%d", i);
}