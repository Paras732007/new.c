#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	//first piramid
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	printf("\n");

	//secand piramid
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
	printf("\n");
	}

	//third piramid
	printf("\n");
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4;b++)
		{
			printf("%d",b);
		}
	printf("\n");
	}

	//fourth piramid
	printf("\n");
	for(a=4;a>=1;a--)
	{
		for(b=4;b>=1;b--)
		{
			printf("%d",b);
		}
	printf("\n");
	}
	//fifth pyranid
	printf("\n");
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
	for(a=3;a<=1;a--)
	{
		for(b=2;b>=a;b++)
		{
			printf("%d",b);
		}
	printf("\n");
	}
	getch();
}