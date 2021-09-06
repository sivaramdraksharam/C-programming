#include<stdio.h>
#include<conio.h>
main()
{
int hh,mm,ss;
clrscr();
printf("\nEnter Time : ");
scanf("%d%d%d",&hh,&mm,&ss);
TIME:
clrscr();
if(hh>12)
{
	hh=1;
}
gotoxy(35,12);
printf("%02d : %02d : %02d",hh,mm,ss);

sleep(1);
ss++;

if(ss==60)
{
	mm++;
	ss=0;
}

if(mm==60)
{
	hh++;
	mm=0;
}

if(!kbhit())
{
	goto TIME;
}
getch();
}

