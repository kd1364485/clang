#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendata[] = { {1,"�k�C��",NULL},
	{2,"�X��",NULL}, {3,"��茧",NULL}, {4,"�{�錧",NULL},
	{5,"�H�c��",NULL}, {6,"�R�`��",NULL}, {7,"������",NULL},
		{28,"���Ɍ�",NULL},{DATA_END,"",NULL} };

	struct ken* p, * wp;
	//�����N�̐ݒ�
	p = wp = kendata;

	do
	{
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
	//�k�C��next�����o�̒l�𕺌Ɍ��̃A�h���X�ɕύX����
	//���Ɍ���next�����o�̒l��X���̃A�h���X�ɂ���
	//1�F�|�C���^p��kendata�̐擪�A�h���X�i�k�C���j����
	p = kendata;
	//2�F�k�C����p->next�ɕ��Ɍ��̃A�h���X����
	p->next = p + 7;
	//3�F���Ɍ���p->next�ɐX���̃A�h���X����
	(p + 7)->next = p + 1;

	//�����N�̕\��
	for (p = kendata; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}