#include<stdio.h>
main()
{
	int a = 100, b;
	int* pa;//�|�C���^�ϐ��̐錾
	pa = &a;//�A�h���X���Z�b�g
	

	printf("a = %d &a = %d\n", a,&a);
	printf("pa = %d *pa = %d &pa = %d\n", pa, *pa, &pa);
}