#include <stdio.h>
main()
{
	int  i;
	char data[15] = "C Language";
	char data2[15];
	char* pdata, * pdata2;
	pdata = data;
	pdata2 = data2;

	printf("data[] = %s\n", pdata);

	for (i = 0; *(pdata2+i) = *(pdata+i); i++);

	pdata2 = data2;
	printf("data2[] = %s\n", pdata2);
	i = 0;
	while (*pdata2 = '\0')
	{
		 putchar(*(pdata2+i));
		 i++;
	}
	putchar('\n');

}