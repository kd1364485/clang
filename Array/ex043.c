#include <stdio.h>

main()
{
	int  i;

	char data[] = "orange";

	printf("一文字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++)
	{
		//printf("%c", data[i]);


	}
	

	printf("文字列 : %s\n", data);
	printf("文字数は%d文字\n ", i);
	

}