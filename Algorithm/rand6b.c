#include <stdio.h>
#include <stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include <time.h>//�������g���Ƃ��ɕK�v�ł�
main()
{
	int kazu, cpu;

	srand(time(0));//����������������


	printf("�����o���܂����H\n");
	printf("(1 �O�[ 2 �`���L 3 �p�[)\n");
	scanf("%d", &kazu);


	printf("%d\n", kazu);
	cpu = rand() % 3 + 1;



	if (kazu == 1)
	{
		printf("Player�̓O�[�ł�\n");
	}
	if (kazu == 2)
	{
		printf("Player�̓`���L�ł�\n");
	}
	if (kazu == 3)
	{
		printf("Player�̓p�[�ł�\n");
	}

	if (cpu == 1)
	{
		printf("cpu�̓O�[�ł�\n");
	}
	if (cpu == 2)
	{
		printf("cpu�̓`���L�ł�\n");
	}
	if (cpu == 3)
	{
		printf("cpu�̓p�[�ł�\n");
	}
	//����񂯂�̏���
	if (kazu == cpu)
	{
		printf("��������\n");
	}
	if ((kazu + 1)%3  == cpu)
	{
		printf("�v���C���[�̏����ł�\n");
	}
	if ((cpu + 1) % 3 == kazu)
	{
		printf("CPU�̏����ł�\n");
	}

		

}