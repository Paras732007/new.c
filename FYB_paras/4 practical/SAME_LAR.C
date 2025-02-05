#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter three value");
	printf("\na=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	printf("\nc=");
	scanf("%d",&c);
	if(a==b&&a==c)
	{
		printf("all same");
	}
	else if(a==c&&b>a)
	{
		printf("a and c is same b is large");
	}
	else if(a==b&&c>a)
	{
		printf("a and b is same c is large");
	}
	else if(b==c&&a>b)
	{
		printf("b and c is same a large");
	}
	else if(a>=b&&c>a)
	{
		printf("a is large");
	}
	else if(b>a&&b>c)
	{
		printf("b is the large");
	}
	else if(c>b&&c>a)
	{
		printf("c is the large");
	}
	else if(a>c&&b>c)
	{
		printf("a and b same c is small");
	}
	else if(a>b&&c>b)
	{
		printf(" a and c same b is small");
	}
	else if(c>a&&b>a)
	{
		printf(" b and c same a is small");
	}
	getch();
}