#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	clrscr();
	printf("enter value of A=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	c=a+b;
	printf("sum=%d\n",c);
	c=a-b;
	printf("minus=%d\n",c);
	c=a/b;
	printf("devid=%d\n",c);
	c=a*b;
	printf("mult=%d\n",c);
	c=a%b;
	printf("modulo=%d",c);
	getch();
}