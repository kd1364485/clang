#include<stdio.h>
main()
{
	char data1[] = "Gamesoft";
	printf("文字列%s", data1);
	int i;
	for (i = 0; data1[i] != '\0'; i++);
	printf("\n文字数は%d", i);
}