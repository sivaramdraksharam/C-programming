#include<stdio.h>
#include<conio.h>
main(int argc,char *argv[])
{
int a,b,c;
clrscr();

if(argc!=2)
{
	printf("Invalid Input");
	return;
}
a=atoi(argv[1]);

for(b=1;b<=10;b++)
{
	c=a*b;
	printf("\n%d X %d = %d",a,b,c);
}

getch();
}
