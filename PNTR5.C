#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
main()
{
int a,b;
clrscr();
printf("\na = ");
scanf("%d",&a);
printf("\nb = ");
scanf("%d",&b);

swap(&a,&b);

printf("\nAfter Swapping:");
printf("\n\na = %d",a);
printf("\n\nb = %d",b);
getch();
}

			/* Call By Reference */
void swap(int *x,int *y)
{
int t=*x;
*x=*y;
*y=t;
}

