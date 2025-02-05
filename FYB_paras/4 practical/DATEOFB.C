#include<stdio.h>
int age(int a,int b);
void main()
{
	int a,b,c;
	clrscr();
	printf("enter curent year=");
	scanf("%d",&a);
	printf("\nenter your born year=");
	scanf("%d",&b);
	c=age(a,b);
	if (c<=18)
	{
		printf("\nunable to voting");
	}
	else if(c<100)
	{
		printf("\nable to voting");
	}
	else
	{
		printf("\ntack a rest");
	}
	getch();
}
int age(int a,int b)
{
	int c;
	c=a-b;
	printf("this is your age=%d",c);
	getch();
	return c;
}