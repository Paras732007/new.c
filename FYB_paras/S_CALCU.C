#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter first int value=");
	scanf("%d",&a);
	printf("enter secand int value=");
	scanf("%d",&b);
	c=a+b;
	printf("sum=%d\n",c);
	c=a-b;
	printf("minus=%d\n",c);
	c=a*b;
	printf("multyply=%d\n",c);
	c=a/b;
	printf("division=%d\n",c);
	getch();
}
