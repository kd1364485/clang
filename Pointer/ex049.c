#include<stdio.h>
main()
{
	int a = 100, b;
	int *pa;//�|�C���^�ϐ��̐錾
	pa = &a;//�A�h���X���Z�b�g
	b = *pa;
	printf("a = %d b = %d *pa = %d\n",a,b,*pa);
}