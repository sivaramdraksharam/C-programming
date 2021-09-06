#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str[30];
clrscr();
puts("Enter String : ");
gets(str);

puts(strupr(str));
puts(strlwr(str));

getch();
}

