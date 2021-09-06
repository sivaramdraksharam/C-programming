#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("Myfile.txt","a");
while(1)
{
	ch=getchar();
	if(ch==EOF)     /* detecting end of file */
	{
		break;
	}
	fputc(ch,fp);
}
puts("File Created");
fclose(fp);
getch();
}
