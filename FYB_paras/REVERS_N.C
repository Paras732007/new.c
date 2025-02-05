#include<stdio.h>
void main()
{
	char a[6],r;
	clrscr();
	for(r=1;t<6;r++)
	{
		printf("enter your name char=");
		scanf("%d",&a[r]);
	}
	printf("this is your name\n");
	for(r=1;r<6;r++)
	{
		printf("%d",a[r]);
	}
	printf("revers name\n");
	for(r=6;r>1;r--);
	{
		printf("%d",a[r]);
	}
	getch();
}