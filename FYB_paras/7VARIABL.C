#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	c=a+b;
	printf("sum=%d\n",c);
	d=a-b;
	printf("minus=%d\n",d);
	e=a*b;
	printf("multy=%d\n",e);
	f=a/b;
	printf("devid=%d\n",f);
	g=a%b;
	printf("modulo=%d\n",g);
	getch();
}
