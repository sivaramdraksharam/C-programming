#include<stdio.h>
#include<conio.h>
typedef struct
{
int sno;
char sname[12];
char crs[12];
}student;

main()
{
FILE *fp,*ft;
int choice,find;
char ch;
student st;
int tno;
long int recsize;
fp=fopen("stud.dat","a+");
recsize=sizeof(st);
while(1)
{
	clrscr();
	printf("\n\t----------------");
	printf("\n\t1.Add Records");
	printf("\n\t2.Modify Records");
	printf("\n\t3.Delete Records");
	printf("\n\t4.List Records");
	printf("\n\t5.Exit");
	printf("\n\t------------------");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			fseek(fp,0,SEEK_END);
			do
			{
				clrscr();
				printf("\nEnter Student ID,Name and Course : ");
					scanf("%d%s%s",&st.sno,&st.sname,&st.crs);
				fwrite(&st,recsize,1,fp);
				printf("\nRecord Added");
				printf("Do you want to Continue (y/n) : ");
				fflush(stdin);
				ch=getchar();
			}while(tolower(ch)=='y');
		break;
		case 2:
		do
		{
			fclose(fp);
			fp=fopen("stud.dat","r+");
			clrscr();
			printf("\nEnter Rec No to Modify : ");
			scanf("%d",&tno);
			rewind(fp);
			find=0;
			while(fread(&st,recsize,1,fp)==1)
			{
				if(st.sno==tno)
				{
					find=1;
					printf("\nRecord Position : %ld",ftell(fp)/recsize);
					printf("\nEnter New Student ID,Name and Course : ");
					scanf("%d%s%s",&st.sno,&st.sname,&st.crs);
					fseek(fp,-recsize,SEEK_CUR);
					fwrite(&st,recsize,1,fp);
				}
			}
			if(find)
				printf("\nRecord Modified");
			else
				printf("\nRecord Not Found");

			printf("\nDo you want to Continue (y/n) : ");
			fflush(stdin);
			ch=getchar();
		}while(tolower(ch)=='y');
		fclose(fp);
		fp=fopen("stud.dat","a+");
		break;
		case 3:
                do
		{
			clrscr();
			printf("\nEnter Student No to Delete : ");
			scanf("%d",&tno);
			rewind(fp);
			find=0;
			ft=fopen("temp.dat","w+");
			while(fread(&st,recsize,1,fp)==1)
			{
				if(st.sno!=tno)
				{
					fwrite(&st,recsize,1,ft);
				}
				else
				{
					find=1;
				}
			}
			fclose(fp);
			fclose(ft);
			remove("stud.dat");
			rename("temp.dat","stud.dat");
			fp=fopen("stud.dat","r+");
			if(find)
				printf("Record Deleted");
			else
				printf("Record Not Found");
			printf("\nDo you want to Continue (y/n) : ");
			fflush(stdin);
			ch=getchar();
		}while(tolower(ch)=='y');
		break;
		case 4:
			rewind(fp);
			printf("\nSno\tSname\tCourse");
			while(fread(&st,recsize,1,fp)==1)
			{
			       printf("\n%d\t%s\t%s",st.sno,st.sname,st.crs);
			}
		break;
		case 5:
			exit(0);
		default:
			printf("\nPlease Check");
		break;
	}
getch();
}
}



