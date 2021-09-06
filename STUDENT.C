typedef struct
{
	int dd;
	int mm;
	int yy;
}date;

typedef struct
{
int sno;
char sname[12];
char crs[10];
date doj;
int fees;
}student;

void addrecord(student[],int);
void deleterecord(student[],int,int);
void list(student[],int);

main()
{
student st[20];
int n=0,i,rec,ch;
while(1)
{
	clrscr();
	gotoxy(20,5);
	printf("----------------------");
	gotoxy(25,6);
	printf("1. Add a Record");
	gotoxy(25,7);
	printf("2. Delete a Record");
	gotoxy(25,8);
	printf("3. List Records");
	gotoxy(25,9);
	printf("4. Exit");
	gotoxy(20,10);
	printf("----------------------");
	printf("\nWhat do you want to do : ");
	scanf("%d",&ch);
	clrscr();
	switch(ch)
	{
		case 1:
			addrecord(st,n);
			n++;
			printf("\nRecord Added........");
		break;
		case 2:
			printf("Enter Record No: to delete : ");
			scanf("%d",&rec);
			rec--;
			if(rec<n)
			{
				deleterecord(st,rec,n);
				n--;
				printf("\nRecord Deleted...........");
			}
			else
			{
				printf("\nPlease Check the Record Number");
			}
		break;
		case 3:
			list(st,n);
		break;
		case 4:
			gotoxy(30,12);
			printf("Good Bye...........");
			getch();
			exit(0);
		default:
                	gotoxy(30,12);
			printf("Wrong Choice...........");
		break;
	}
getch();
}
}


void addrecord(student s[],int i)
{
	printf("\nEnter Student ID : ");
	scanf("%d",&s[i].sno);
	printf("\nEnter Student Name : ");
	scanf("%s",&s[i].sname);
	printf("\nEnter Course : ");
	scanf("%s",&s[i].crs);
	printf("\nEnter Date of Joining : ");
	scanf("%d%d%d",&s[i].doj.dd,&s[i].doj.mm,&s[i].doj.yy);
	printf("\nEnter Course Fees : ");
	scanf("%d",&s[i].fees);
}

void deleterecord(student s[],int r,int n)
{
int i;
	for(i=r;i<n;i++)
	{
		s[i]=s[i+1];
	}
}

void list(student s[],int n)
{
int i;
	printf("\nID\tName\tCourse\tDate\tFees");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%s\t%02d-%02d-%4d\t%d",s[i].sno,s[i].sname,s[i].crs,s[i].doj.dd,s[i].doj.mm,s[i].doj.yy,s[i].fees);
	}
}
