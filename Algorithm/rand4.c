#include <stdio.h>
#include <stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include <time.h>//�������g���Ƃ��ɕK�v�ł�
main()
{
	int kazu,i;
	
	srand(time(0));//����������������
	kazu = rand() % 5 + 1;
	
	printf("�����̂��Ȃ��̉^����");
	for ( i = 0; i < kazu; i++)
	{
		printf("��");
	}
	printf("�ł�");
	
}