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
		{28,"ΊΙ§",NULL},{DATA_END,"",NULL} };

	struct ken* p, * wp;
	//NΜέθ
	p = wp = kendata;

	do
	{
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
	//kCΉnextoΜlπΊΙ§ΜAhXΙΟX΅Δ
	//ΊΙ§ΜnextoΜlπΒX§ΜAhXΙ·ι
	//1F|C^pΙkendataΜζͺAhXikCΉjπγό
	p = kendata;
	//2FkCΉΜp->nextΙΊΙ§ΜAhXπγό
	p->next = p + 7;
	//3FΊΙ§Μp->nextΙΒX§ΜAhXπγό
	(p + 7)->next = p + 1;

	//NΜ\¦
	for (p = kendata; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}