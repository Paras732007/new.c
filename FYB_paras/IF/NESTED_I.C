#include<stdio.h>r
void main()
{
	int a,b;
	clrscr();
	printf("enter nay two nomber\n");
	scanf("%d%d",&a,&b);
	if(a>=b)//outer if
	{
		if(a==b)//inner if
		{
			printf("both are same");
		}
		else//inner else
		{
			printf("a is large");
		}
	}
	else//outer if
	{
		printf("b is large");
	}

	getch();
}
