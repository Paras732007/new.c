#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("enter your namber=");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	getch();
}