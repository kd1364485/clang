#include<stdio.h>
int add(int a, int b);//�v���g�^�C�v�錾
int hiku(int a, int b);
main()
{
	int a, b, kotae;
	printf("2�̐��������");
	scanf("%d%d", &a, &b);

	printf("���v = %d", add(a, b));
	printf("�����Z = %d", hiku(a, b));
}

int add(int a, int b)
{
	return(a+b);
}
int hiku(int a, int b)
{
	return(a - b);
}
