#include<stdio.h>
main()
{
	int i;
	char* pgame[3] = { "wii", "ds", "playstation4" };
	char** p;

	for (i = 0; i < 3; i++)
	{
		p = &pgame[i];

		while (**p != '\0')
		{
			printf("%c", **p);
			(*p)++;
		}
		printf("\n");

	}
}