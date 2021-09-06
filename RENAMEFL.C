#include<stdio.h>
#include<conio.h>
main()
{
char fname1[30],fname2[30];
int r;
clrscr();
printf("\nEnter Old File Name : ");
gets(fname1);
printf("Enter New File Name: ");
gets(fname2);
r=rename(fname1,fname2);
if(r==0)
	printf("File has been renamed");
else
	printf("File not found");
getch();
}

