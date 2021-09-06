#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str1[30],str2[30],str3[30];
clrscr();
puts("Enter String1 : ");
gets(str1);

puts("Enter String2 : ");
gets(str2);

puts("Enter String3 : ");
gets(str3);

strcat(str1,str3);
strncat(str2,str3,4);

printf("\nString 1 : %s",str1);
printf("\nString 2 : %s",str2);

getch();
}

