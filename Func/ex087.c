#include<stdio.h>
main(int argc,char *argv[])
{
	int answer,a,b;
	a = atoi(argv[1]);//文字列を数値に変換
	b = atoi(argv[2]);//文字列を数値に変換
	answer = a + b;
	printf("%d + %d = %d",a,b,answer);
}