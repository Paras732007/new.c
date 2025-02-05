#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	if(a>=b)// (10>20) (10==20)  fols
	{
		if(a==b)
		{
			if(a<c)
			{
				printf("c is largest");

				printf("a and b is same\n");
			}
		       else
		       {
				printf("a and b is same\n");
		       }
		      printf("c is largest");
		}
		else
		{
			printf("a is largest");
		}
	}
	else
	{	if(b>=c)// (20>10) true (20==10) false
		{
			if(b==c)
			{
				printf("b and c is same\n");
			}
			else
			{
				printf("a and c is same\n");
			}
			printf("a is largest");
		}
		else
		{
			printf("c is largest");
		}
	}
	getch();
}