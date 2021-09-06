#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,n;
clrscr();
printf("\nEnter a Value to print Tables: ");
scanf("%d",&n);

for(a=1;a<=n;a++)
{
	clrscr();
	for(b=1;b<=10;b++)
	{
		c=a*b;
		printf("\n%d X %d = %d",a,b,c);
	}
getch();
}
}

