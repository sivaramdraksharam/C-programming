#include<stdio.h>
#include<conio.h>

main()
{
char str[30];
int l;
clrscr();
puts("Enter String : ");
gets(str);

for(l=0;str[l]!='\0';l++);

printf("\nLength of the given string : %d",l);
getch();
}

