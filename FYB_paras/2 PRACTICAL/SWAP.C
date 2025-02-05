#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n%d",a);
	printf("\n%d",b);
	getch();
}
