#include <stdio.h>
main()
{
	float a, b, c;
	printf("1�ڂ̊֐�");
	scanf("%f",&a);
	printf("2�ڂ̊֐�");
	scanf("%f", &b);
	printf("3�ڂ̊֐�");
	scanf("%f", &c);
	printf("���v= %.2f",a + b + c);
	printf("����= %.2f\n",(a + b + c)/3.0);
}