#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa, * pb,*w;
	pa = &a,  pb = &b;
	printf("���s�O: *pa = %d\t *pb = %d\n",*pa,*pb);
	//�|�C���^�Ɋi�[�����A�h���X�����ւ�
	
	w = pa;
	pa = pb;
	pb = w;

	printf("���s��: *pa = %d\t *pb = %d",*pa,*pb);

}