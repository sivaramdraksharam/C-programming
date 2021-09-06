#include<stdio.h>
#include<conio.h>
main()
{
int x[]={2,5,7,8,12,15};
int *p,i;
clrscr();
p=x;	/* p=&x[0]; */
printf("Array Elements");
for(i=1;i<=6;i++,p++)
{
	printf("\n%d",*p);
}

getch();
}


