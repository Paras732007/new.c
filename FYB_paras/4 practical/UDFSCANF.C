#include<stdio.h>
int a;
void abc();
void main()
{
	clrscr();
	abc();
	abc();
	abc();
	abc();
	abc();
	getch();
}
void abc()
{
	printf("enter your value=");
	scanf("%d",&a);
	printf("fun calling value=%d\n",a);
	getch();
}