#include<stdio.h>
#include<conio.h>
typedef struct{
	int sno;
	char sname[12];
	char course[10];
}student;

main()
{
FILE *fp;
student st;
char ch;
int r=0;
clrscr();

fp=fopen("student.dat","r");

printf("\nSNO\t\tSNAME\t\tCOURSE");
printf("\n-------------------------------------");

do
{
fscanf(fp,"\n%d\t%s\t%s",&st.sno,&st.sname,&st.course);
printf("\n%d\t\t%s\t\t%s",st.sno,st.sname,st.course);
r++;
}while(!feof(fp));

printf("\n--------------------------------------");
printf("\nTotal Number of Records :     # %d",r);
printf("\n----------------------------------------");
fclose(fp);
getch();
}




