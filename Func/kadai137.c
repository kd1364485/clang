#include<stdio.h>
char moji(char a);
main()
{
	char a;
	printf("���������");
	scanf("%c", &a);
	printf("moji = %c", moji(a));
	if (moji(a) == 0)
	{
		printf("������");
	}
	else {

		printf("�啶��");
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