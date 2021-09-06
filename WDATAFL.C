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
clrscr();

fp=fopen("student.dat","a");

do
{
clrscr();
printf("\n\t\tEnter Student Information");
printf("\nStudent ID\t:\t");
scanf("%d",&st.sno);
printf("\nStudent Name\t:\t");
scanf("%s",&st.sname);
printf("\nStudent Course\t:\t");
scanf("%s",&st.course);

fprintf(fp,"\n%d\t%s\t%s",st.sno,st.sname,st.course);

printf("\n\nRecord Added Successfully");
printf("\nDo You want to Add More (y/n) : ");
fflush(stdin);
ch=getchar();
}while(tolower(ch)=='y');
fclose(fp);
getch();
}




