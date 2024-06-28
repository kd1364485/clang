#include<stdio.h>
void  irekae(char* p1,char*p2);
main()
{
	char str1[126],str2[126];
	printf("•¶Žš—ñ");
	scanf("%s",&str1);
	irekae(str1, str2);
	printf("str1 :%s\n", str1);
	printf("str2 :%s\n", str2);
}
void irekae(char* p1,char*p2)
{
	int i, j;
	i = 0;
	char w[256],s[256];
	for (j = 0; *(p1+1) != '\0'; j++)
	{
		p1++;

	}
	
	for (i = 0;i<=j;i++)
	{
		*p2 = *p1;
		p2++;
		p1--;
	}
	*p2 = '\0';
	return;

}