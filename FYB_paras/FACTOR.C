#include<stdio.h>
void main()
{
	int a,b,s=0;
	clrscr();
	printf("enter your factor nomber=");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		if(b%a==0)
		{
			printf("%d,",a);
			s++;
		}
	}
	printf("\nyour total factor element=%d",s);
	if(s<=2)
	{
		printf("\n your factor is prime nomber");
	}
	else
	{
		printf("\n your factor is not prime nomber");
	}
	getch();
}