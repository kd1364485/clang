#include<stdio.h>
#include <string.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	int i, j;
	struct fruit abc[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"water",1500,5,8,0} };
	struct fruit* p = abc;

	for (i = 0; i < 3; i++,p++)
	{
		printf("%s", p->name);
		printf("\n%d\n", p->price);


		for (j = 0; j < p->point; j++);
		printf("%dƒ|ƒCƒ“ƒg", j);
		printf("\n%d", p->number);
		printf("\n%d\n", p->price * p->number);
	}

}