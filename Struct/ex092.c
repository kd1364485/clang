#include<stdio.h>
struct syouhindata {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syouhindata syouhin[3] = { {"えんぴつ",30,5},
		{"消しゴム",50,2},{"ふでばこ",500,3} };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("商品名:%s\t", syouhin[i].name);
		printf("単価:%4d\t", syouhin[i].tanka);
		printf("個数:%4d\n", syouhin[i].kosuu);
	}
}