#include <stdio.h>
main()
{
	char  ope;

	printf("演算子を入れて");
	scanf("%c",&ope);

	switch (ope)
	{
	case +: printf("加算です");
		break;
	case -: printf("減算です");
		break;
	case *: printf("乗さんです");
		break;
	case /: printf("除算です");
		break;
	case %: printf("あまりです");
		break;




	default: printf("その他の文字です");
		break;
	}

}