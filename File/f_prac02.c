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
	printf("�ō����_�@���O:%s �n�C�X�R�A:%d\n",
		maxName,maxScore);
	printf("�v���C���[������́F");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A�F%d:('e'�ŏI��)\n", score);

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
		printf("�n�C�X�R�A�X�V\n");
	}
}
