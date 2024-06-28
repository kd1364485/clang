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
	int i,j;
	struct fruit abc[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"water",1500,5,8,0} };
	for (i = 0; i < 3; i++)
	{
		printf("%s", abc[i].name);
		printf("\n%d\n", abc[i].price);


		for (j = 0; j < 5; j++)
		{
			if (j < abc[i].point)
			{
				printf("š");
			}
			else
			{
				printf("™");
			}
		}
		printf("\n%d", abc[i].number);
		printf("\n%d\n", abc[i].price* abc[i].number);
	}

}