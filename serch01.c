#include <stdio.h>
#include <stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include <time.h>//�������g���Ƃ��ɕK�v�ł�
main()
{
	int data[10] = { 10 , 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;
	srand(time(0));//����������������

	printf("�T���l�����");
	scanf("%d",&s);

	
	for (i = 0; i < 10; i++)
	{
		if (s == data[i])
		{
			break;
		}
	}
	if (i == 10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("�T���l%d���Adata[%d]�Ŕ���!\n",s,i);
	}



	


}