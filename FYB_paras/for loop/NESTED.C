#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(a=1;a<=4;a++)
	{
		for(b=4;b>=a;b--)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}