#include <stdio.h>
main()
{
	char data[] = "Language";
	int i;
	char* pdata,ch;
	pdata = data;
	
	printf("data[] = %s\n", pdata);

	printf("���������́H");
	scanf("%c",&ch);
	printf("�������ʂ́H");
	i = 0;
	while (*(pdata+i))
	{
		if (ch ==*(pdata+i))
		{
			printf("%d",i+1);
		}
		i++;
	}
	printf("�����ڂł�");
}