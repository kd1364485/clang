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
	{DATA_END,"",NULL} };

	struct ken* p, * wp;
	//リンクの設定
	p = wp = kendata;

	do
	{
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
	//青森のnextメンバの値を宮崎県のアドレスに変更
	//ポインタｐにkendataの先頭アドレスを入れる
	 p = kendata;
	//pointerを使って青森県のアドレスを求める
	 p++;//p = p+1だとエラーがでた
	//青森県のp->nextに宮崎県のアドレス(pを使う)を代入
	p->next = p + 2;

	//リンクの表示
	for (p = kendata; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}