#include<stdio.h>
main()
{
	int i, k[21];
	i = 0;

	char s[21];
	

	printf("����������");
	scanf("%s", &s[0]);

	while (s[i] != '\0') 
	{
		printf("��[%d]�̕����L�[",i);
		scanf("%d",&k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("�������������\���A%s\n", s);
}