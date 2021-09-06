#include<stdio.h>
#include<conio.h>
main()
{
char fname[12];
int r;
clrscr();
printf("\nEnter File Name : ");
gets(fname);
r=remove(fname);
if(r==0)
	printf("File has been deleted");
else
	printf("File not found");
getch();
}

