#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str[30];
int l;
clrscr();
puts("Enter String : ");
gets(str);

l=strlen(str);

printf("\nLength of the given string : %d",l);
getch();
}

