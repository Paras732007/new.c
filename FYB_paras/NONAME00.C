#include<stdio.h>
void main()
{
	int a;
	clrscr();
	scanf("%d",&a);
	if(a<=10)
	{
	printf("your nomber is between 1 to 10");
	}
	else if(a<=20)
	{
		printf("this nomber between 11 to 20");
	}
	else if(a>20)
	{
		printf("this nomber other than 1 to 20");
	}
	getch();
}