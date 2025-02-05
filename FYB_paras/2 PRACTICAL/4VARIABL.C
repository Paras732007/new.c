#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	int d;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	d=a;
	a=b;
	b=c;
	c=d;
	printf("first posibility\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	d=a;
	a=b;
	b=c;
	c=d;
	printf("secand posibility\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	getch();
}
