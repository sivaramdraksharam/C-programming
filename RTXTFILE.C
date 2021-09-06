#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp;
char ch,fname[30];
clrscr();
printf("\nEnter File Name : ");
gets(fname);
fp=fopen(fname,"r");
if(fp==NULL)
{
	printf("Sorry File Not Found");
	getch();
	exit(1);
}
clrscr();
while(1)
{
	ch=fgetc(fp);
	if(ch==EOF)
	{
		break;
	}
	putchar(ch);
}
fclose(fp);
getch();
}
