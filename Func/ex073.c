#include<stdio.h>
void errormsg(void);
main()
{
	int a, b;
	printf("data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		errormsg();//�֐��̌Ăяo��
	}
	else {
		printf("&d / %d = %d�E�E�E%d", a, b, a / b, a % b);
	}
}
	void errormsg(void)
	{
		printf("0�Ŋ���؂�܂���\n");
		return;
	}
