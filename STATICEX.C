void display();
main()
{
clrscr();
display();
display();
display();
getch();
}

void display()
{
static i=1;
printf("\ni = %d",i);
i++;
}

