#include <stdio.h>

main()
{
	//�񕪒T���i�o�C�i���T�[�`�j
	int d[] = { 10 , 15, 18, 23, 28, 35, 55, 68, 78, 96 };
	int  s,low,mid,high;

	printf("�T���l�����");
	scanf("%d", &s);

	low = 0;
	high = 10;
	
	
	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("Low:%d mid:%d high%d\n",low,mid, high);
		if (s == d[mid])
		{
			break;
		}
		
		if (s > d[mid])
		{
				low = mid + 1;

		}
		if (s < d[mid])
		{
				high = mid - 1;
		}	
	}
	if (low > high)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("d[% d]��%d�𔭌�!\n",mid, s);
	}
}