#include<stdio.h>
void main()
{
	int a,b=0;
	clrscr();
	for(a=1;a<=10;a++)
	{
		b=b+a;
		printf("%d\n",a);
	}
	printf("sum=%d",b);
	getch();
}