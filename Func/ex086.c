#include<stdio.h>
//argcにはデータの個数
//argv「」には文字列の先頭アドレスが入る
main(int argc, char* argv[])
{
	int i;
	printf("argc = %d\n",argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv = [%d] = %s\n",i, argv[i]);
	}
}