#include<stdio.h>
void  irekae(char* p1, char* p2);
main()
{
	char str1[126], str2[126];
	printf("•¶Žš—ñ");
	scanf("%s", &str1);
	scanf("%s",&str2);
	irekae(str1, str2);
	printf("str1 :%s\n", str1);
}
void irekae(char* p1, char* p2)
{
	int i, j;
	i = 0;
	char w[256], s[256];
	for (i = 0; p1[i] != '\0'; i++);

	for (j = 0; p2[j] != '\0'; i++, j++)
	{
		p1[i] = p2[j];
	}
	p1[i] = '\0';
	return ;

}