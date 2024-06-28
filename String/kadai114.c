#include<stdio.h>
main()
{
	int i;
	char data1[20];
	printf("•¶š—ñ‚Í");
	scanf("%s", &data1);
	printf("•¶š—ñ%s", data1);
	for (i = 0; data1[i] != '\0'; i++);
	printf("\n•¶š”‚Í%d", i);
}