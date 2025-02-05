#include<stdio.h>
void main()
{
	int a;
	int b;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d",a);
	printf("\n%d",b);
	getch();
}