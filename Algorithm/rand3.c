#include <stdio.h>
#include <stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include <time.h>//�������g���Ƃ��ɕK�v�ł�
main()
{
	int kazu;
	srand(time(0));//����������������
	kazu = rand() % 101 + 1;

	if (kazu<=30)
	{
		printf("��S�̈ꌂ\n");
	}
	else {
		printf("�ʏ�U��\n");
	}
	


}