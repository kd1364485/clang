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
		p = kendata;//�|�C���^����z��̐擪�A�h���X�i�k�C���j��
		p->next = p + 6;//�k�C����next�����o��6��̕����̃A�h���X��
			//�����N�̕\��
			for (p = kendata; p->code != DATA_END; p = p->next)
			{
				printf("%d", p);
				printf("code = %d name = %s\n", p->code, p->name);
				printf("%d\n", p->next);
			}
}