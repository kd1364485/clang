#include<stdio.h>
main()
{
	char* p = "pointer test program";
	char save[256];
	int i;
	for (i = 0;*p;i++)
	{
		save[i] = *p++;
		
	}
	
	printf("%s", save);
}