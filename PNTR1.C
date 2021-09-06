#include<stdio.h>
#include<conio.h>
main()
{
int a,b,*p,*q,add,sub,mul,div;
clrscr();
printf("\na = ");
scanf("%d",&a);
printf("\nb = ");
scanf("%d",&b);

p=&a;
q=&b;

add=*p+*q;
sub=*p-*q;
mul=(*p)*(*q);
div=(*p)/(*q);

printf("\nAddress of a : %u",p);
printf("\nAddress of b : %u",q);
printf("\nAddition is       : %d",add);
printf("\nSubtraction is    : %d",sub);
printf("\nMultiplication is : %d",mul);
printf("\nDivision is       : %d",div);
getch();
}
