#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter value b=");
	scanf("%d",&b);
	for(a=1;a<=10;++a)
	{
		printf("%d*%d=%d\n",b,a,a*b);
	}
	getch();
}