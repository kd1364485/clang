#include<stdio.h>
struct syouhindata {
	char name[20];
	int tanka;
};
void display3(struct syouhindata *p);

main()
{
	int a = 10;
	struct syouhindata syouhin = { "Á‚µƒSƒ€",50 };
	display3(&syouhin);//

}
void display3(struct syouhindata *p)
{
	printf("syouhin = %s syouhin.tanka = %d\n", p->name, p->tanka);
}