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
	{DATA_END,"",NULL} };

	struct ken* p, * wp;
	//�����N�̐ݒ�
	p = wp = kendata;

	do
	{
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
	//�X��next�����o�̒l���{�茧�̃A�h���X�ɕύX
	//�|�C���^����kendata�̐擪�A�h���X������
	 p = kendata;
	//pointer���g���ĐX���̃A�h���X�����߂�
	 p++;//p = p+1���ƃG���[���ł�
	//�X����p->next�ɋ{�茧�̃A�h���X(p���g��)����
	p->next = p + 2;

	//�����N�̕\��
	for (p = kendata; p->code != DATA_END; p = p->next)
	{
		printf("code = %d name = %s\n", p->code, p->name);
	}
}