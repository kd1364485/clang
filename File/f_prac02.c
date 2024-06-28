#include <stdio.h>
main()
{
	int score = 0,maxScore;
	char ch,maxName[20];
	char name[20];
	FILE* fp;
	fp = fopen("score.txt","r");
	fscanf(fp, "%s%d", maxName, &maxScore);
	fclose(fp);
	printf("最高得点　名前:%s ハイスコア:%d\n",
		maxName,maxScore);
	printf("プレイヤー名を入力：");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア：%d:('e'で終了)\n", score);

		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (maxScore < score)
	{
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("ハイスコア更新\n");
	}
}
