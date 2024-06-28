#include<stdio.h>
main()
{
	int i = 0;
	char* day[] = {
		"Sunday","Monday","Tuesday",
		"Wednesday","Thursday","Friday","Saturday",NULL };
	for (i = 0;day[i]!= NULL;i++)
	{
		printf("%s",day[i]);
		printf("\n");
	}
}