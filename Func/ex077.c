#include<stdio.h>
void getsumavg(int x, int y,int g,int *max,int *min);
main()
{
	int a, b, g,max,min;
	printf("整数を3つ入力：");
	scanf("%d%d%d", &a,&b,&g);
	getsumavg(a, b,g,&max,&min);
	printf("最大 = %d  最小  = %d\n", max, min);
}
void getsumavg(int x, int y,int g,int *max,int*min )
{
	//最大値を求める
	*max = (x > y) ? (x > g ? x : g) : (y > g ? y : g);
		//最小値を求める
	*min = (x < g) ? (x < y ? x:y ) : (y < g ? y : g);
	
	return;
}