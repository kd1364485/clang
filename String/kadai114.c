#include<stdio.h>
main()
{
	int i;
	char data1[20];
	printf("文字列は");
	scanf("%s", &data1);
	printf("文字列%s", data1);
	for (i = 0; data1[i] != '\0'; i++);
	printf("\n文字数は%d", i);
}