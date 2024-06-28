#include<stdio.h>

struct syouhindata {
	char name[20];
	int tanka;
	int kosuu;
	
};
main()
{
	struct syouhindata syouhin[3] = { {"‚¦‚ñ‚Ò‚Â",30,5},
		{"Á‚µƒSƒ€",50,2},{"‚Ó‚Å‚Î‚±",500,3} };
	struct syouhindata* p = syouhin;
	int i;
	for (i = 0; i < 3; i++,p++)
	{
		printf("¤•i–¼:%s\t", p->name);
		printf("’P‰¿:%4d\t", p->tanka);
		printf("ŒÂ”:%4d\t", p->kosuu);
		printf("‹àŠz:%4d\n", p->tanka * p->kosuu);
	}
}