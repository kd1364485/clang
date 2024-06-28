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
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("¤•i–¼:%s\t", syouhin[i].name);
		printf("’P‰¿:%4d\t", syouhin[i].tanka);
		printf("ŒÂ”:%4d\n", syouhin[i].kosuu);
	}
}