#include<stdio.h>
main()
{

	char  a[10],w[10];
	int i, j;

	printf("•¶š—ñ‚ğ“ü—ÍF");

	while (gets(a) != NULL)
	{
		for (i = 0;a[i]!= '\0';i++)
		{
			w[i] = a[i];
		}
		for (j = 0, i--; i >= 0; j++, i--)
		{
			a[j] = w[i];

		}


		printf("%s\n", a);
		printf("•¶š—ñ‚ğ“ü—ÍF");
	

	}


}