#include<stdio.h>
main()
{
	int i;
	char* pgame[3] = { "wii", "ds", "playstation4" };
	char** p;
	p = pgame;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n",*p++);
		
	}
}