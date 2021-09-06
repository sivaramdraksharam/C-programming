#include<stdio.h>
#include<conio.h>
main(int argc,char *argv[])
{
int a,b,c,i;
clrscr();

for(i=1;i<argc;i++)
{
	clrscr();
	a=atoi(argv[i]);

	for(b=1;b<=10;b++)
	{
		c=a*b;
		printf("\n%d X %d = %d",a,b,c);
	}
getch();
}
}

