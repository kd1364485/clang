#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 }, i,w[30];
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb;
	pa = a;
	pb = b;
	printf("�z��a[] = ");
	for (i = 0; i < 10; i++)
	{
		
		printf(" %d", a[i]);
	}
	

	printf("\n�z��[] = ");
	for (i = 0; i < 10; i++)
	{

		printf("  %d", b[i]);
	}
	//����ւ�����1
	printf("\n�z��a[] = ");
	for (i = 0; i < 10; i++, pa++ , pb++)
	{
		w[i] = *pa;
		*pa = *pb;
		printf(" %d", *pa);

	}
	//pb��0�v�f���珈�����邽�߂Ɂu���v(�v�f0�Ԗ�)��pb�ɑ�����ē���ւ�����1�ōs����pb�̗v�f��
	//�v�f0�Ԗڂ��珈���������̂Łu���v�������邱�Ƃɂ���ėv�f0�Ԗڂ��炵��肷��
	printf("\n�z��b[] = ");
	for (i = 0,pb = b ; i < 10; i++, pb++)
	{
		*pb = w[i];
		printf(" %d", *pb);

	}
	
}