#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str1[30],str2[30],str3[30];
clrscr();
puts("Enter String1 : ");
gets(str1);

strcpy(str2,str1);
strncpy(str3,str1,8);
str3[8]='\0';

printf("\nString 1 : %s",str1);
printf("\nString 2 : %s",str2);
printf("\nString 3 : %s",str3);

getch();
}


/*
char grd;
char res[5];

grd= 'A';   --> OK
res="Pass";  --> Error

strcpy(res,"Pass"); --> Ok

*/

