#include<stdio.h>
int factor();
void main()
{

	clrscr();
	//printf("enter your nomber")
	factor();
	getch();
}
int factor()
{
	int a,b=1;
	printf("enter your nomber");
	scanf("%d",&a);
	b=b*a;
	if(b==a)
	{
		printf("=");
	}
	else
	{
	b++;
	factor();
	}
	return 0;
}
