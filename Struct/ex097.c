#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendata[] = { {1,"kCΉ",NULL},
	{2,"ΒX§",NULL}, {3,"βθ§",NULL}, {4,"{ι§",NULL},
	{5,"Hc§",NULL}, {6,"R`§",NULL}, {7,"§",NULL},
	{DATA_END,"",NULL} };

	struct ken* p, * wp;
	//NΜέθ
	p = wp = kendata;

	do
	{
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
		p = kendata;//|C^πzρΜζͺAhXikCΉjΦ
		p->next = p + 6;//kCΉΜnextoπ6ΒζΜΜAhXΦ
			//NΜ\¦
			for (p = kendata; p->code != DATA_END; p = p->next)
			{
				printf("%d", p);
				printf("code = %d name = %s\n", p->code, p->name);
				printf("%d\n", p->next);
			}
}