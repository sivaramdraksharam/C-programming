#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str1[30],str2[30];
int r;
clrscr();
puts("Enter String1 : ");
gets(str1);

puts("Enter String2 : ");
gets(str2);

r=strcmp(str1,str2);
/*r=strncmp(str1,str2,4);*/
/*r=stricmp(str1,str2);*/

if(r==0)
{
	printf("\nBoth Strings are Equal");
}
else
{
	printf("\nBoth Strings are Not Equal");
}
getch();
}

