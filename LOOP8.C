#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,sum=0;
clrscr();
printf("\nEnter n Value : ");
scanf("%d",&n);
i=1;
while(i<=n)
{
	j=i*i;
	printf("%d+",j);
	sum=sum+j;
	i++;
}
printf("\b=%d",sum);
getch();
}

