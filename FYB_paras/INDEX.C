#include<stdio.h>
void main()
{
	int a[4],b;
	clrscr();
	for(b=0;b<=3;b++)
	{
		printf("enter your value a[%d]=",b);
		scanf("%d",&a[b]);
		printf("a[%d]=%d\n",b,a[b]);
	}
	getch();
}