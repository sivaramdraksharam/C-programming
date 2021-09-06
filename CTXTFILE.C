#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp1,*fp2;
char ch,fname1[30],fname2[30];
clrscr();
printf("\nEnter Source File Name : ");
gets(fname1);
fp1=fopen(fname1,"r");
if(fp1==NULL)
{
	printf("Source File Not Found");
	getch();
	exit(1);
}
puts("Enter New File Name: ");
gets(fname2);
fp2=fopen(fname2,"w");

while(1)
{
	ch=fgetc(fp1);
	if(ch==EOF)
	{
		break;
	}
	fputc(ch,fp2);
}
puts("File Copied");
fclose(fp1);
fclose(fp2);
getch();
}

