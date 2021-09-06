#include<stdio.h>
#include<conio.h>
main(int argc,char *argv[])
{
int i;
clrscr();
printf("\nNumber of arguments : %d",argc-1);

for(i=1;i<argc;i++)
{
	printf("\n%s",argv[i]);
}

getch();
}
