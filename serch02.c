serch01.c#include <stdio.h>

main()
{
	//���`�T���̉��ǁi�ԕ��@�jdeta������߂ɍ�邻��ɒT��������
	int data[11] = { 10 , 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;
	
	printf("�T���l�����");
	scanf("%d", &s);

	data[11] = s;

	for (i = 0; s != data[i]; i++)
	{
		
	}
	if (i == 11)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("�T���l%d���Ad[%d]�Ŕ���!\n", s, i);
	}
}