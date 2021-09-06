			/* Float Demo */
#include<stdio.h>
#include<conio.h>
main()
{
float a,b,div;
clrscr();

printf("\nEnter a Value : ");
scanf("%f",&a);
printf("\nEnter b Value : ");
scanf("%f",&b);

/*printf("\nEnter a and b values :\n");
scanf("%f%f",&a,&b);*/

div=a/b;

printf("\nDivision is : %f",div);
printf("\nDivision is : %.2f",div);

getch();
}
