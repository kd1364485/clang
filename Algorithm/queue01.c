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
		printf("\n\nえんキューはi,できゅーはoを入力");
		key = getche();
		printf("\n");

		if (key == 'i')
		{
			printf("データを入力");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\nきゅーがいっぱいです");
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
				printf("\nきゅーがカラです");
			}
			else
			{
				printf("きゅーからデータ(%d)を取り出しました\n", data);
				display();
			}
		}

	} while (key != 'e');
}
void display(void)
{
	int i;
	printf("\n現在のきゅーの内容");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head)
		{
			printf("←headが示している所(現在headは%d)", head);
		}
		if (i == tail)
		{
			printf("←tailが示している所(現在tailは%d)", tail);
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
