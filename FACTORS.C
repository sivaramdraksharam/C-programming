#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
clrscr();
printf("\nEnter n Value : ");
scanf("%d",&n);
printf("\nFactors of %d are : ",n);
for(i=1;i<=n/2;i++)
{
	if(n%i==0)
	{
		printf("\n%d",i);
	}
}
getch();
}

