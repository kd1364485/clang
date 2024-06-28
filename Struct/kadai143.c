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
	int i;
	struct fruit abc;
	strcpy(abc.name,("peach\n"));
	abc.price = 300;
	abc.point = 5;
	abc.number = 3;
	abc.total = 0;
	abc.total = abc.price * abc.number;
	printf("%s", abc.name);
	printf("\n%d\n",abc.price);
	for (i = 0;i<abc.point;i++) 
	{
		printf("™");
	}
	printf("\n%d", abc.number);
	printf("\n%d", abc.total);

}