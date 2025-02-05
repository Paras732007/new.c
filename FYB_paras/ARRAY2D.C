#include<stdio.h>
void main()
{
	int a[3][2];
	clrscr();
	a[2][1]=2;
	a[0][0]=10;
	a[1][1]=7;
	printf("%d",a[2][1]);
	getch();
}