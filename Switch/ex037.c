#include <stdio.h>
main()
{
	char  ope;

	printf("���Z�q������");
	scanf("%c",&ope);

	switch (ope)
	{
	case +: printf("���Z�ł�");
		break;
	case -: printf("���Z�ł�");
		break;
	case *: printf("�悳��ł�");
		break;
	case /: printf("���Z�ł�");
		break;
	case %: printf("���܂�ł�");
		break;




	default: printf("���̑��̕����ł�");
		break;
	}

}