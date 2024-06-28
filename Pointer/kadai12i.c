#include<stdio.h>
main()
{
	char data[] = "mikan";
	char data2[6];
	char *pdata,*pdata2;
	pdata = data;
	pdata2 = data2;

	int i;
	
	//iを使うバー
	/*for (i = 0;pdata[i] != '\0'; i++)
	{
		printf("\n%c", pdata[i]);
		pdata2[i] = pdata[i];
		
	}
	pdata2[i] = '\0';
	
	printf("\n%s",pdata2);*/

	//while (*pdata2 != '\0');
	
	//iを使わないバー
	while (*pdata2 != '\0') {

		 * pdata2 = *pdata;
		//printf("\n%c", *pdata2);
		pdata++;
		pdata2++;
		i++;
	}
	
	pdata2 = data;
	printf("\n%s", pdata2);

	

}