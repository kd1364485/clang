#include<stdio.h>
void getsumavg(int x, int y,int g,int *max,int *min);
main()
{
	int a, b, g,max,min;
	printf("������3���́F");
	scanf("%d%d%d", &a,&b,&g);
	getsumavg(a, b,g,&max,&min);
	printf("�ő� = %d  �ŏ�  = %d\n", max, min);
}
void getsumavg(int x, int y,int g,int *max,int*min )
{
	//�ő�l�����߂�
	*max = (x > y) ? (x > g ? x : g) : (y > g ? y : g);
		//�ŏ��l�����߂�
	*min = (x < g) ? (x < y ? x:y ) : (y < g ? y : g);
	
	return;
}