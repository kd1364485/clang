#include<stdio.h>
void getsumavg(int x, int y,int g,int *max,int *min);
main()
{
	int a, b, g,max,min;
	printf("®”‚ğ3‚Â“ü—ÍF");
	scanf("%d%d%d", &a,&b,&g);
	getsumavg(a, b,g,&max,&min);
	printf("Å‘å = %d  Å¬  = %d\n", max, min);
}
void getsumavg(int x, int y,int g,int *max,int*min )
{
	//Å‘å’l‚ğ‹‚ß‚é
	*max = (x > y) ? (x > g ? x : g) : (y > g ? y : g);
		//Å¬’l‚ğ‹‚ß‚é
	*min = (x < g) ? (x < y ? x:y ) : (y < g ? y : g);
	
	return;
}