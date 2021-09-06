#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();

printf("\nEnter a Value : ");
scanf("%d",&a);
printf("\nEnter b Value : ");
scanf("%d",&b);
printf("\nEnter c Value : ");
scanf("%d",&c);

		/* Using Logical Operators */

if(a>b && a>c)
{
	printf("A is Big");
}
else if(b>a && b>c)
{
	printf("B is Big");
}
else
{
	printf("C is Big");
}
getch();
}
