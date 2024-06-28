#include<stdio.h>
#include<string.h>
#define NIN 2
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[NIN];
	struct profile* p;
	int i;

	for (p = data ,i = 0;i<NIN;i++,p++)
	{
		printf("%dl–Ú–¼‘O‚ð“ü—Í",i+1);
		scanf("%s", p->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("ŒŒ‰tŒ^‚ð“ü—Í");
		scanf("%s", p->blood);
		printf("%s - -%d”N%dŒŽ%d“ú ŒŒ‰tŒ^-%sŒ^\n",
			p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
	}
	for (p = data,i= 0;i<NIN;i++,p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--%d”N%02dŒŽ%02d“ú@ŒŒ‰tŒ^-%s",
				p->name,p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}