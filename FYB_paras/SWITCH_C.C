#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("enter 1 to 7 nomber\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("sunday");
		break;
		case 2:
		printf("monday");
		break;
		case 3:
		printf("tuesday");
		break ;
		case 4:
		printf("wenesday");
		break ;
		case 5:
		printf("thruesday");
		break ;
		case 6:
		printf("friday");
		break;
		case 7:
		printf("satyrday");
		break ;
		default:
		printf("sorry this dsy is not avalsble");
	}
	getch();
}
