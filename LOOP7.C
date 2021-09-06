#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
clrscr();
printf("\nEnter n Value : ");
scanf("%d",&n);
i=1;
while(i<=n)
{
	printf("\n%d",i);
	i+=2;
}
getch();
}

