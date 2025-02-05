#include<stdio.h>
void main()
{
	int a,b=1,c;
	clrscr();
	printf("enter your nomber=");
	scanf("%d",&c);
	for(a=1;a<=c;a++)
	{
		b=b*a;
		printf("%d",a);
		if(a==c)
		{
			printf("=");
		}
		else
		{
			printf("*");
		}
	}
	printf("%d",b);
	getch();
}