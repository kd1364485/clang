#include<stdio.h>
//argc�ɂ̓f�[�^�̌�
//argv�u�v�ɂ͕�����̐擪�A�h���X������
main(int argc, char* argv[])
{
	int i;
	printf("argc = %d\n",argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv = [%d] = %s\n",i, argv[i]);
	}
}