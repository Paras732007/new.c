#include<stdio.h>
void main()
{
	int row=3,col=5,a,b;
	clrscr();
	for(a=0;a<=row;a++)
	{
		for(b=0;b<col;b++)
		{
			if(a==0||a==row||b==0||b==col-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}
