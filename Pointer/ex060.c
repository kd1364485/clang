#include <stdio.h>
main()
{
	char data[] = "Language";
	int i;
	char* pdata,ch;
	pdata = data;
	
	printf("data[] = %s\n", pdata);

	printf("検索文字は？");
	scanf("%c",&ch);
	printf("検索結果は？");
	i = 0;
	while (*(pdata+i))
	{
		if (ch ==*(pdata+i))
		{
			printf("%d",i+1);
		}
		i++;
	}
	printf("文字目です");
}