#include<stdio.h>
#define QUEUESIZE 8
int stack[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;
	do {
		printf("\n\n����L���[��i,�ł���[��o�����");
		key = getche();
		printf("\n");

		if (key == 'i')
		{
			printf("�f�[�^�����");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n����[�������ς��ł�");
			}
			else
			{
				display();
			}
		}
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n����[���J���ł�");
			}
			else
			{
				printf("����[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}

	} while (key != 'e');
}
void display(void)
{
	int i;
	printf("\n���݂̂���[�̓��e");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head)
		{
			printf("��head�������Ă��鏊(����head��%d)", head);
		}
		if (i == tail)
		{
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
		}

		printf("\n");
	}
	return;
}
int enqueue(int d)
{
	if (tail+1)%QUEUESIZE == head { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}
int dequeue(int* pd)
{
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;
	return 0;
}
