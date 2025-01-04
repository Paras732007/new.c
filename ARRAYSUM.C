#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],d[2][2];
	int c,r;
	clrscr();
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter value of a[%d][%d]",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter value of b[%d][%d]",r,c);
			scanf("%d",&b[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			d[r][c]=a[r][c]+b[r][c];
			printf("your sum of[%d][%d] is=%d\n",r,c,d[r][c]);
		}
	}
	getch();
}