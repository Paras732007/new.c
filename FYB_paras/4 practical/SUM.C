#include<stdio.h>
void sum(int a,int b);
void sub(int a,int b);
void multy(int a,int b);
void division(int a,int b);
void main()
{
	int a,b;
	clrscr();
	printf("enter two valu\n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	sub(a,b);
	multy(a,b);
	division(a,b);
	getch();
}
void sum(int a,int b)
{
	int c;
	c=a+b;
	printf("sum=%d\n",c);
	getch();
}
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("sub=%d\n",c);
	getch();
}
void multy(int a,int b)
{
	int c;
	c=a*b;
	printf("multyplication=%d\n",c);
	getch();
}
void division(int a,int b)
{
	int c;
	c=a/b;
	printf("division=%d\n",c);
}