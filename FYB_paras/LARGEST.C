#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter 3 different value\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	if(a>b)
	{       if(c>a)
		{
			printf("c is largest");
		}
		else
		{
			printf("a is largest");
		}
	}
	else
	{       if(b>c)
		{
			printf("b is largest");
		}
		else
		{
			printf("c is largest");
		}
	}
	getch();
}
