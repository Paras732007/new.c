#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter your nomber from");
	scanf("%d",&a);
	printf("to");
	scanf("%d",&b);
	for(a;a<=b;a++)
	{
		printf("%d.",a);
		if(a%2==0)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
		printf("\n");
	}
	getch();
}