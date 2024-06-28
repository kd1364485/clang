#include<stdio.h>
main()
{
	int i;
	i = 0;

	char s[21],k[21];
	

	printf("暗号化文字列を入力");
	scanf("%s", &s[0]);
	printf("複合キーを入力");
	scanf("%s", & k[0]);
	while (s[i] != '\0')
	{
		s[i] -= (k[i]-'0');
		i++;
	}
	printf("複合化文字列を表示、%s\n", s);
}