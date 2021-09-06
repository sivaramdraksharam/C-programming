#include<stdio.h>
#include<conio.h>
main()
{
int n;
long int f=1;
clrscr();
printf("\nEnter n Value : ");
scanf("%d",&n);
while(n>=1)
{
	f=f*n;
	n--;
}
printf("\nFactorial is : %ld",f);
getch();
}

