#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("enter value of m=");
	scanf("%d",&a);
	((a>=1)&&(a<=10))?printf("pass"):printf("fall");
	getch();
}