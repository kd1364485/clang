#include<stdio.h>
#include<string.h>
struct animal {
	int no;
	char name[20];
	char color[10];
};
void display(struct animal* p, int cunt);
void display2(struct animal* p, int* cunt);
void display3(struct animal* p, int count);
main()
{
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * pdata = data;
	int i, su, a = 3;
	char dumy[100];

	printf("処理メニュー(Xの入力で終了します)\n");
	printf("1データ表示　：2データ追加：　3データ検索：　処理は\t");
	su = getchar();
	gets(dumy);
	while(su != 'X')
	{
		switch(su)
		{
		case '1':
				display(data, a);
				break;
		case'2':
			display2(data, & a);
			break;
		case'3':
			display3(data, a);
			break;
		default:
				printf("エラー");
				break;
		}
		printf("\n\n処理メニュー(Xの入力で終了します)\n");
		printf("1データ表示　：2データ追加：　3データ検索：　処理は\t");
		su = getchar();
		gets(dumy);
	}
}
	
void display(struct animal* p,int cunt)
{
	int i;
	for (i = 0; i < cunt; i++,p++)
	{
		printf("番号%d名前%s色%s\n", p->no, p->name, p->color);
	}
}
void display2(struct animal* p, int* cunt) {
	if (*cunt >= 50) {
		printf("データいっぱい\n");
		return;
	}
	else {
		printf("番号を入力してください: ");
		scanf("%d", &(p[*cunt].no));
		printf("名前を入力してください: ");
		scanf("%s", p[*cunt].name);
		printf("色を入力してください: ");
		scanf("%s", p[*cunt].color);
	}
	
	(*cunt)++;  // データの数を増やす
	printf("追加すると\n");
	int i;
	for (i = 0; i < *cunt; i++, p++)
	{
		printf("番号%d名前%s色%s\n", p->no, p->name, p->color);
	}
}
void display3(struct animal* p, int count) {
	int sentaku, num, i;
	char name[20], color[10];
	

	printf("検索項目を選択してください: \n");
	printf("1. 番号\n");
	printf("2. 名前\n");
	printf("3. 色\n");
	scanf("%d", &sentaku);
	

	switch (sentaku) {
	case 1:
		printf("番号を入力してください: ");
		scanf("%d", &num);
		for (i = 0; i < count; i++) {
			if (p[i].no == num) {
				printf("見つかったデータ: 番号: %d 名前: %s 色: %s\n", p[i].no, p[i].name, p[i].color);
				
			}
		}
		break;
	case 2:
		printf("名前を入力してください: ");
		scanf("%s", name);
		for (i = 0; i < count; i++) {
			if (strcmp(p[i].name, name) == 0) {
				printf("見つかったデータ: 番号: %d 名前: %s 色: %s\n", p[i].no, p[i].name, p[i].color);
				
			}
		}
		break;
	case 3:
		printf("色を入力してください: ");
		scanf("%s", color);
		for (i = 0; i < count; i++) {
			if (strcmp(p[i].color, color) == 0) {
				printf("見つかったデータ: 番号: %d 名前: %s 色: %s\n", p[i].no, p[i].name, p[i].color);
				
			}
		}
		break;
	default:
		break;
	}
}


