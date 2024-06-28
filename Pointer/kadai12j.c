#include <stdio.h>
main()
{
	char data[] = "ringo",data2[10];
	int i, j;
	char* pdata, *pdata2;
	pdata = data;
	pdata2 = data2;

	printf("data[] = %s", pdata);
	for (i = 0; *(pdata + i) != '\0'; i++);
	for (j = 0,i--;i>=0;i--,j++)
	{
		*(pdata2 + j) = *(pdata + i);
	}
	*(pdata2 + j) = '\0';
	printf("\n‹t‡Œ‹‰Ê \n");
	printf("data2[] = %s", pdata2);
	
	
	
}