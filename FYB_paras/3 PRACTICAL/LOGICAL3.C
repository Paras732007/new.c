#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("enter random valu and i chack posetiv/nagitiv");
	scanf("%d",&a);
	(a>=0) ?printf("posetiv"):printf("nagitiv");
	getch();
}