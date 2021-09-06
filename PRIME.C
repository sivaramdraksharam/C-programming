#include<stdio.h>
#include<conio.h>
main()
{
int n,i,cnt=0;
clrscr();
printf("\nEnter n Value : ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		cnt++;
	}
}
if(cnt==2)
	printf("\nPrime Number");
else
	printf("\nNot a Prime Number");
getch();
}

