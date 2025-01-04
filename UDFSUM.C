#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2],r,d;
	clrscr();
	a[2]=a[d];
	printf("enter your dimantion value");
	scanf("%d",&d);
	for(r=0;r<d;r++)
	{
		printf("enter value of a[%d]=",r);
		scanf("%d",&a[r]);
	}
	for(r=0;r<d;r++)
	{
		printf("sum of a[%d]=%d",r,a[r]+a[r]);
	}
	getch();
}
