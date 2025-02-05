#include<stdio.h>
void main()
{
	int a[10],r;
	clrscr();
	for(r=0;r<10;r++)
	{
		printf("enter nomber of a[%d]=",r);
		scanf("%d",&a[r]);
	}
	printf("print that value\n");
	for(r=0;r<10;r++)
	{
		printf("this is your value a[%d]=%d\n",r,a[r]);
	}
	getch();
}