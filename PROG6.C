			/* Arithmetic Operations */
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,add,sub,mul,div;
clrscr();

printf("\nEnter a Value : ");
scanf("%d",&a);
printf("\nEnter b Value : ");
scanf("%d",&b);

/*printf("\nEnter a and b values :\n");
scanf("%d%d",&a,&b);*/

add=a+b;
sub=a-b;
mul=a*b;
div=a/b;

printf("Addition is : %d",add);
printf("\n%d - %d = %d",a,b,sub);
printf("\nMultiplication is :%d\nDivision is : %d",mul,div);
printf("\nRemainder is : %d",a%b);

getch();
}
