#include <stdio.h>

main()
{
	int  i;
	i = 0;
	char moji1[40], moji2[40],w[40];
	

	printf("文字列1を入力\n");
	scanf("%s",&moji1[0]);

	printf("文字列2を入力\n");
	scanf("%s", &moji2[0]);
	printf("moji1=%s moji2=%s\n",moji1,moji2);
	
	//文字列1の配列要素をWにコピーする
    while (moji1[i] != '\0')
	{
		w[i] = moji1[i];
		i++;
	}
	w[i] ='\0';
	    printf("w=%s\n", w);//文字の内容尾が表示

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
	printf("文字を入れ替えると\nmoji1=%s moji2=%s\t", moji1, moji2);
}