#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
clrscr();
printf("\nEnter n Value : ");
scanf("%d",&n);
i=2;
while(i<=n)
{
	printf("\n%d",i);
	i+=2;
}
getch();
}

