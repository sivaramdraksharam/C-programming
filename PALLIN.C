#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str1[12],str2[12];
clrscr();
puts("Enter String : ");
gets(str1);

strcpy(str2,str1);

if(stricmp(str1,strrev(str2))==0)
{
	puts("Pallindrome");
}
else
{
	puts("Not a Pallindrome");
}
getch();
}
