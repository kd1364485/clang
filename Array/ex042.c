#include <stdio.h>
main()
{
	int  i;
	
	char data[] = "Apple";

	printf("�ꕶ�����\��\n");
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c",data[i]);

		
	}
	printf("������ŕ\��\n ");

	printf("%s\n",&data[0]);

}