#include<stdio.h>
char moji(char a);
main()
{
	char a;
	printf("•¶Žš‚ð“ü—Í");
	scanf("%c", &a);
	printf("moji = %c", moji(a));
	if (moji(a) == 0)
	{
		printf("¬•¶Žš");
	}
	else {

		printf("‘å•¶Žš");
	}
	
}
char moji(char a)
{
	if (a>=0x61&&a<=0x7A  )
	{
		return(0);
	}
	else {

		return(1);
	}

}