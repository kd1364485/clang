#include <stdio.h>
main()
{
	char data[] = "Language";
	int i;
	char* pdata,ch;
	pdata = data;
	
	printf("data[] = %s\n", pdata);

	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c",&ch);
	printf("ŒŸõŒ‹‰Ê‚ÍH");
	i = 0;
	while (*(pdata+i))
	{
		if (ch ==*(pdata+i))
		{
			printf("%d",i+1);
		}
		i++;
	}
	printf("•¶š–Ú‚Å‚·");
}