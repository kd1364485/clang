#include <stdio.h>
#include <stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include <time.h>//�������g���Ƃ��ɕK�v�ł�
main()
{
	int  data[20];
	int i, target, work;
	srand(time(0));//����������������

	for (i = 0; i < 20; i++)
	{
		data[i] = i+1;
	}
	//�m�F�p�̕\��
	printf("\n----------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}
	//�V���b�t��1
	//�ŏ��̂��Ԗڂɂ���v�f���V���b�t���������
	//n�Ԗڂɔz�u����Ă��܂�
	for (i = 0; i < 20; i++)
	{

		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;

	}
	//�m�F�p�̕\��
	printf("\n----------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}
	
}