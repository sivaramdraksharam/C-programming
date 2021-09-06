#include<stdio.h>
#include<conio.h>
main()
{
int x[]={2,5,7,8,12,15,67,45,23,86,49,14,50};
int *p,*q,r;
clrscr();
p=&x[2];
q=&x[8];
r=q-p;
printf("\nNo of Values : %d",r);
getch();
}


