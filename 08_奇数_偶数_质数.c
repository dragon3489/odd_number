#include<stdio.h>
int main()
{
	int a;
	char ch;
	while(1)
	{
		printf("������һ����������s����ѭ��\n");
		scanf("%d",&a);
		if(getchar()=='s')
			break;
		if(a%2==0)
			printf("%d��ż��\n",a);
		else
			printf("%d������\n",a);
	}
	while(1);
	return 0;
}