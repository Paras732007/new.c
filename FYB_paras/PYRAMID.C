#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	for(a=1;a<=3;a++)
	{
		for(b=1;b<a;b++)
		{
			printf(" ");
		}
		for(c=3;c>=a;c--)
		{
			printf("*");
		}
	printf("\n");
	}
	getch();
}