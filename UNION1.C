struct student
{
int sno;
char sname[12];
char course[10];
float fees;
};

union stud
{
int sno;
char sname[12];
char course[10];
float fees;
};

main()
{
struct student st;
union stud ut;
clrscr();
printf("\nSize of the Structure : %d",sizeof(st));
printf("\nSize of the Union     : %d",sizeof(ut));
getch();
}

