#include <stdio.h>

main()
{
	int i ;
	char s[20],k[20] ;

	i = 0;

	printf("文字列を入力してください");
	scanf("%s",&s[0]);

	while(s[i] != '\0')
	{
		s[i] = s[i] + i;
		i++;
	}
	printf("暗号化文字列は、%s\n",s);

	printf("複合キーを入力");
	scanf("%s", &k[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i] -= (k[i] - '0');
		i++;
	}
	printf("複合化文字列を表示、%s\n", s);
}