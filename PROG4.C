				/* CHAR DEM0 */
#include<stdio.h>
#include<conio.h>
main()
{
char ch,name[12];
clrscr();

printf("\nPress any Character : ");
fflush(stdin);
ch=getchar();

printf("\nEnter Your Name : ");
fflush(stdin);
gets(name);

putchar(ch);
printf("\nYou have entered %c Character\n",ch);
puts(name);
printf("\nYour Name : %s",name);

getch();
}

