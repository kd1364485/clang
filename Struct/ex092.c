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
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("���i��:%s\t", syouhin[i].name);
		printf("�P��:%4d\t", syouhin[i].tanka);
		printf("��:%4d\n", syouhin[i].kosuu);
	}
}