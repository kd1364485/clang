#include<stdio.h>
main()
{
	int i, k[21];
	i = 0;

	char s[21];
	

	printf("文字列を入力");
	scanf("%s", &s[0]);

	while (s[i] != '\0') 
	{
		printf("ｓ[%d]の複合キー",i);
		scanf("%d",&k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("複合化文字列を表示、%s\n", s);
}