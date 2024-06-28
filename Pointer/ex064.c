#include<stdio.h>
main()
{
	int i;
	char* pride[3] = { "car", "bus", "shinkansen" };
	char* p;
	for (i = 0; i<3; i++)
	{
		p = pride[i];
			while ( *p != '\0')
			{
				printf("%c\n",*p);
				p++;
			}
		printf("\n");
	}
}