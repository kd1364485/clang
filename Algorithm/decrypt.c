#include<stdio.h>
main()
{
	int i;
	i = 0;
	char s[20];
	printf("•¶š—ñ‚ğ“ü—Í");
	scanf("%s",&s[0]);

	while (s[i] != '\0')
	{
		s[i] -=  1;
		i++;
	}
	printf("•¡‡‰»•¶š—ñ‚ğ•\¦%s",s);
}