#irnclude<stdio.h>
void main()
{
	int a;
	int b;
	clrscr();
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("sum=%d\n",a+b);
	printf("minus=%d\n",a-b);
	printf("multy=%d\n",a*b);
	printf("devid=%d\n",a/b);
	printf("modulo=%d",a%b);
	getch();
}