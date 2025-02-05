#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter your nomber");
	scanf("%d",&a);
      /*	if(a<0)
	{
		printf("-");
		a=-a;
	}   */
	do
	{
	b=a%10;
	printf("%d",b);
	a/=10;
	}
	while(b>0);
	{

	}
	getch();
}
