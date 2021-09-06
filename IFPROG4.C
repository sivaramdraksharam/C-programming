			/* Arithmetic Operations */
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

if(ch==1)
	printf("\n%d + %d = %d",a,b,a+b);
else if(ch==2)
	printf("\n%d - %d = %d",a,b,a-b);
else if(ch==3)
	printf("\n%d x %d = %d",a,b,a*b);
else if(ch==4)
	printf("\n%d / %d = %.2f",a,b,a/(float)b);
else if(ch==5)
	printf("\n%d %% %d = %d",a,b,a%b);
else
	printf("\nWrong Choice");

getch();
}
