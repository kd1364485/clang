#include <stdio.h>

main()
{
	int  i;
	i = 0;
	char moji1[40], moji2[40],w[40];
	

	printf("������1�����\n");
	scanf("%s",&moji1[0]);

	printf("������2�����\n");
	scanf("%s", &moji2[0]);
	printf("moji1=%s moji2=%s\n",moji1,moji2);
	
	//������1�̔z��v�f��W�ɃR�s�[����
    while (moji1[i] != '\0')
	{
		w[i] = moji1[i];
		i++;
	}
	w[i] ='\0';
	    printf("w=%s\n", w);//�����̓��e�����\��

		i = 0;
	while (moji2[i]!='\0')
	{
		moji1[i] = moji2[i];
		i++;
	}
	moji1[i] = '\0';

	i = 0;
	while (w[i] != '\0')
	{
		moji2[i] = w[i];
		i++;
	}
	moji2[i] = '\0';
	printf("���������ւ����\nmoji1=%s moji2=%s\t", moji1, moji2);
}