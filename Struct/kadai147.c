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

	printf("�������j���[(X�̓��͂ŏI�����܂�)\n");
	printf("1�f�[�^�\���@�F2�f�[�^�ǉ��F�@3�f�[�^�����F�@������\t");
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
				printf("�G���[");
				break;
		}
		printf("\n\n�������j���[(X�̓��͂ŏI�����܂�)\n");
		printf("1�f�[�^�\���@�F2�f�[�^�ǉ��F�@3�f�[�^�����F�@������\t");
		su = getchar();
		gets(dumy);
	}
}
	
void display(struct animal* p,int cunt)
{
	int i;
	for (i = 0; i < cunt; i++,p++)
	{
		printf("�ԍ�%d���O%s�F%s\n", p->no, p->name, p->color);
	}
}
void display2(struct animal* p, int* cunt) {
	if (*cunt >= 50) {
		printf("�f�[�^�����ς�\n");
		return;
	}
	else {
		printf("�ԍ�����͂��Ă�������: ");
		scanf("%d", &(p[*cunt].no));
		printf("���O����͂��Ă�������: ");
		scanf("%s", p[*cunt].name);
		printf("�F����͂��Ă�������: ");
		scanf("%s", p[*cunt].color);
	}
	
	(*cunt)++;  // �f�[�^�̐��𑝂₷
	printf("�ǉ������\n");
	int i;
	for (i = 0; i < *cunt; i++, p++)
	{
		printf("�ԍ�%d���O%s�F%s\n", p->no, p->name, p->color);
	}
}
void display3(struct animal* p, int count) {
	int sentaku, num, i;
	char name[20], color[10];
	

	printf("�������ڂ�I�����Ă�������: \n");
	printf("1. �ԍ�\n");
	printf("2. ���O\n");
	printf("3. �F\n");
	scanf("%d", &sentaku);
	

	switch (sentaku) {
	case 1:
		printf("�ԍ�����͂��Ă�������: ");
		scanf("%d", &num);
		for (i = 0; i < count; i++) {
			if (p[i].no == num) {
				printf("���������f�[�^: �ԍ�: %d ���O: %s �F: %s\n", p[i].no, p[i].name, p[i].color);
				
			}
		}
		break;
	case 2:
		printf("���O����͂��Ă�������: ");
		scanf("%s", name);
		for (i = 0; i < count; i++) {
			if (strcmp(p[i].name, name) == 0) {
				printf("���������f�[�^: �ԍ�: %d ���O: %s �F: %s\n", p[i].no, p[i].name, p[i].color);
				
			}
		}
		break;
	case 3:
		printf("�F����͂��Ă�������: ");
		scanf("%s", color);
		for (i = 0; i < count; i++) {
			if (strcmp(p[i].color, color) == 0) {
				printf("���������f�[�^: �ԍ�: %d ���O: %s �F: %s\n", p[i].no, p[i].name, p[i].color);
				
			}
		}
		break;
	default:
		break;
	}
}


