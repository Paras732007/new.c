#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2],r;
	clrscr();
	for(r=0;r<2;r++)
	{
		printf("enter value a[%d]",r);
		scanf("%d",&a[r]);
	}
	for(r=0;r<2;r++)
	{
	printf("this is your value ofa[%d]=%d\n",r,a[r]);
	}
	getch();
}