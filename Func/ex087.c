#include<stdio.h>
main(int argc,char *argv[])
{
	int answer,a,b;
	a = atoi(argv[1]);//������𐔒l�ɕϊ�
	b = atoi(argv[2]);//������𐔒l�ɕϊ�
	answer = a + b;
	printf("%d + %d = %d",a,b,answer);
}