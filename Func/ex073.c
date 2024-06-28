#include<stdio.h>
void errormsg(void);
main()
{
	int a, b;
	printf("data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		errormsg();//関数の呼び出し
	}
	else {
		printf("&d / %d = %d・・・%d", a, b, a / b, a % b);
	}
}
	void errormsg(void)
	{
		printf("0で割り切りません\n");
		return;
	}
