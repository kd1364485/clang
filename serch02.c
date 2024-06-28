serch01.c#include <stdio.h>

main()
{
	//線形探索の改良（番兵法）detaを一つ多めに作るそれに探査口を代入
	int data[11] = { 10 , 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;
	
	printf("探査値を入力");
	scanf("%d", &s);

	data[11] = s;

	for (i = 0; s != data[i]; i++)
	{
		
	}
	if (i == 11)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("探査値%dを、d[%d]で発見!\n", s, i);
	}
}