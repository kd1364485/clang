#include <stdio.h>
#include <stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include <time.h>//�������g���Ƃ��ɕK�v�ł�
main()
{
	int kazu, i;

	srand(time(0));//����������������
	

	printf("�����̂��Ȃ��̉^����");
	for (i = 0; i <= 100; i++)
	{
		kazu = rand() % 300 + 1;
		printf("%d\n",kazu);
	}
	printf("�ł�");

}