			/* Using Switch Case */
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,ch;
clrscr();

printf("\nEnter a Value : ");
scanf("%d",&a);
printf("\nEnter b Value : ");
scanf("%d",&b);

printf("\nEnter Your Choice : ");
scanf("%d",&ch);

switch(ch)
{
	case 1:printf("\n%d + %d = %d",a,b,a+b);break;
	case 2:printf("\n%d - %d = %d",a,b,a-b);break;
	case 3:printf("\n%d x %d = %d",a,b,a*b);break;
	case 4:printf("\n%d / %d = %.2f",a,b,a/(float)b);break;
	case 5:printf("\n%d %% %d = %d",a,b,a%b);break;
	default:printf("\nWrong Choice");break;
}
getch();
}
