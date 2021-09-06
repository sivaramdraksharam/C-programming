				/* SCANF DEMO */
#include<stdio.h>
#include<conio.h>
main()
{
int x;
char ch,name[12];
float y;
long int z;

clrscr();

printf("\nEnter Integer Value : ");
scanf("%d",&x);

printf("\nPress any Character : ");
/*scanf(" %c",&ch); */

fflush(stdin);
scanf("%c",&ch);

printf("\nEnter Your Name : ");
scanf("%s",&name);

printf("\nEnter Float Value : ");
scanf("%f",&y);

printf("\nEnter Long Integer Value : ");
scanf("%ld",&z);

printf("\n\nGiven Integer Value : %d",x);
printf("\nGiven Character Value : %c",ch);
printf("\nYour Name : %s",name);
printf("\nGiven Float Value : %f",y);
printf("\nGiven Long Integer Value : %ld",z);
}
