#include<stdio.h>
main()
{
	char a ;
    printf("文字を入力：");
	scanf("%c", &a);
	
	if (a >= 'A' && a <= 'Z')
	{

		printf("大文字です\n");
	}
	else {
		printf("その他の文字です\n");
	}

}