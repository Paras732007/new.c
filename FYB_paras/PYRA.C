#include<stdio.h>
void main()
{
       int a,b;
       clrscr();
       for(a=1;a<=4;a++)
       {
		for(b=1;b<=a;b++)
		{
			if(b==1||b==3)
			{
				printf("*");
			}
			else
			{
				printf("#");
			}
		}
       printf("\n");
       }
       getch();
}