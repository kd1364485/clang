#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3
typedef unsigned int UINT;

typedef struct
{
	char name[20];//skill型構造体
	int type;//skill
	int use_mp;//使用MP量
	int effect;//skill効果
}Skil;
typedef struct//Spec型構造体
{
	char name[20];//名前
	int hp;//HP
	int atk;//攻撃力
	int def;//防御力
	UINT state;//状態
}Spec;
typedef struct//chara型構造体
{
	Spec sp;//Spec型構造体変数
	int maxhp;//最大HP
	int mp;//ｍｐ
	Skil skl[Skil_Num];//Skil型構造体配列
	
}Chara;
typedef struct//Mob型構造体
{
	Spec sp;
	int rate;//状態異常攻撃発生レート

}Mob;













enum BitsState
{
	Base = 0,//0000 0000通常状態
	Poison = 1<<0,//0000 0001毒
	Sleep = 1<<1,//0000 0010眠り
	Paralysis = 1<<2,//0000 0100まひ
	Burn = 1<<3,//0000 1000やけど
	AtkUp = 1<<4,//0001 0000攻撃力アップ
	AtkDown = 1<<5//0010 0000攻撃力ダウン
};

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);

}
void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison)//sは自身のしてーたす
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s & Base)
	{
		printf("通常状態\n");
	}
	
		printf("***************\n");
	

}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？");
		printf("1:毒2:睡眠3:麻痺4:火傷5:攻撃力↑6:攻撃力↓0:終了");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		   case 1:
			   *s |= Poison;
			   break;
		   case 2:
			   *s |= Sleep;
			   break;
		   case 3:
			   *s |= Paralysis;
			   break;
		   case 4:
			   *s |= Burn;
			   break;
		   case 5:
			   *s |= AtkUp;
			   break;
		   case 6:
			   *s |= AtkDown;
			   break;
		 

		}
	}

}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか");
		printf("1:毒2:睡眠3:麻痺4:火傷5:攻撃力↑6:攻撃力↓7:全解除0:終了");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;


		}
	}
}