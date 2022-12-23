#include<stdio.h>
int main()
{
	int a;
	char ch;
	while(1)
	{
		printf("请输入一个数，输入s结束循环\n");
		scanf("%d",&a);
		if(getchar()=='s')
			break;
		if(a%2==0)
			printf("%d是偶数\n",a);
		else
			printf("%d是奇数\n",a);
	}
	while(1);
	return 0;
}