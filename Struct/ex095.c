#include<stdio.h>
struct syouhindata {
	char name[20];
	int tanka;
};
void display1(int a);
void display2(struct syouhindata syouhin);

main()
{
	int a = 10;
	struct syouhindata syouhin = { "Á‚µƒSƒ€",50 };
	display1(a);
	display2(syouhin);
	
}
void display1(int a)
{
	printf("a = %d\n",a);
}
void display2(struct syouhindata syouhin)
{
	printf("syouhin = %s syouhin.tanka = %d\n",syouhin.name,syouhin.tanka);
}