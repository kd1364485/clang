#include<stdio.h>
main()
{
	int i;
	i = 0;
	char s[20];
	printf("文字列を入力");
	scanf("%s",&s[0]);

	while (s[i] != '\0')
	{
		s[i] -=  1;
		i++;
	}
	printf("複合化文字列を表示%s",s);
}