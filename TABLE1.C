#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("\nEnter a Value to print Table: ");
scanf("%d",&a);

for(b=1;b<=10;b++)
{
	c=a*b;
	printf("\n%d X %d = %d",a,b,c);
}
getch();
}

