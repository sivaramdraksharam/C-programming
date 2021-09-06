#include<stdio.h>
#include<conio.h>

struct book
{
int bcode;
char title[10];
char author[12];
float cost;
};

main()
{
struct book b1={1101,"LetUsC","Yashwanth",150.00};
struct book b2,b3;
clrscr();

printf("\nEnter Book Details:");
printf("\nCode\t:\t");
scanf("%d",&b2.bcode);
printf("\nTitle\t:\t");
scanf("%s",&b2.title);
printf("\nAuthor\t:\t");
scanf("%s",&b2.author);
printf("\nCost\t:\t");
scanf("%f",&b2.cost);

b3=b1;

printf("\nCode\tTitle\tAuthor\tCost");
printf("\n%d\t%s\t%s\t%.2f",b1.bcode,b1.title,b1.author,b1.cost);
printf("\n%d\t%s\t%s\t%.2f",b2.bcode,b2.title,b2.author,b2.cost);
printf("\n%d\t%s\t%s\t%.2f",b3.bcode,b3.title,b3.author,b3.cost);
getch();
}


