#include<stdio.h>
void moji(char* a, char*b);
main()
{
	char a[10], b[10];
	int i = 0;

	printf("”z—ñ");
	scanf("%s", a);
	printf("”z—ñ");
	scanf("%s", b);
	moji(a, b);
	printf("\n˜AŒ‹‚³‚ê‚½Œã‚Ì•¶Žš—ñ\t%s ", a);
	
}
void moji(char* a, char* b)
{
	int i, j;
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0';i++, j++)
	{
		a[i] = b[j];

	}
	a[i] = '\0';
	return;

}