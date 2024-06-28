#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendata[] = { {1,"–kŠC“¹",NULL},
	{2,"ÂXŒ§",NULL}, {3,"ŠâŽèŒ§",NULL}, {4,"‹{éŒ§",NULL},
	{5,"H“cŒ§",NULL}, {6,"ŽRŒ`Œ§",NULL}, {7,"•Ÿ“‡Œ§",NULL},
	{DATA_END,"",NULL} };

	struct ken* p, * wp;
	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = kendata;

	do
	{
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
		p = kendata;//ƒ|ƒCƒ“ƒ^‚‚ð”z—ñ‚Ìæ“ªƒAƒhƒŒƒXi–kŠC“¹j‚Ö
		p->next = p + 6;//–kŠC“¹‚Ìnextƒƒ“ƒo‚ð6‚Âæ‚Ì•Ÿ“‡‚ÌƒAƒhƒŒƒX‚Ö
			//ƒŠƒ“ƒN‚Ì•\Ž¦
			for (p = kendata; p->code != DATA_END; p = p->next)
			{
				printf("%d", p);
				printf("code = %d name = %s\n", p->code, p->name);
				printf("%d\n", p->next);
			}
}