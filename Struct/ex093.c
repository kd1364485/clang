#include<stdio.h>

struct syouhindata {
	char name[20];
	int tanka;
	int kosuu;
	
};
main()
{
	struct syouhindata syouhin[3] = { {"����҂�",30,5},
		{"�����S��",50,2},{"�ӂł΂�",500,3} };
	struct syouhindata* p = syouhin;
	int i;
	for (i = 0; i < 3; i++,p++)
	{
		printf("���i��:%s\t", p->name);
		printf("�P��:%4d\t", p->tanka);
		printf("��:%4d\t", p->kosuu);
		printf("���z:%4d\n", p->tanka * p->kosuu);
	}
}