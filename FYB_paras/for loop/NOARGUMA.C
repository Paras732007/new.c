#include<stdio.h>
void main()
{
	int a=1;
	clrscr();
	for(;;)
	{
		printf("%d",a);
		if(a==4)
		{
			break;
		}
		a++;

	}

	getch();
}