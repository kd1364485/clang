#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendata[] = { {1,"北海道",NULL},
	{2,"青森県",NULL}, {3,"岩手県",NULL}, {4,"宮城県",NULL},
	{5,"秋田県",NULL}, {6,"山形県",NULL}, {7,"福島県",NULL},
		{28,"兵庫県",NULL},{DATA_END,"",NULL} };

	struct ken* p, * wp;
	//リンクの設定
	p = wp = kendata;

	do
	{
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
	//北海道nextメンバの値を兵庫県のアドレスに変更して
	//兵庫県のnextメンバの値を青森県のアドレスにする
	//1：ポインタpにkendataの先頭アドレス（北海道）を代入
	p = kendata;
	//2：北海道のp->nextに兵庫県のアドレスを代入
	p->next = p + 7;
	//3：兵庫県のp->nextに青森県のアドレスを代入
	(p + 7)->next = p + 1;

	//リンクの表示
	for (p = kendata; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}