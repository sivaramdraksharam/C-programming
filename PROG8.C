			/* Type Casting Demo */
#include<stdio.h>
#include<conio.h>
main()
{
char ch;
int v;
clrscr();

printf("\nPress any Character : ");
fflush(stdin);
ch=getchar();

v=(int)ch;

printf("\nASCII Value of %c is %d",ch,v);

getch();
}
