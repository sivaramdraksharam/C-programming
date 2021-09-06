#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,prime;
enum choice{Natural=1,Even,Odd,Prime,Quit}ch;
while(1)
{
clrscr();
printf("\nEnter Range : ");
scanf("%d",&n);
gotoxy(20,5);
printf("------------------------------");
gotoxy(25,6);
printf("1. Natural Numbers");
gotoxy(25,7);
printf("2. Even Numbers");
gotoxy(25,8);
printf("3. Odd Numbers");
gotoxy(25,9);
printf("4. Prime Numbers");
gotoxy(25,10);
printf("5. Exit");
gotoxy(20,11);
printf("-------------------------------");
gotoxy(20,13);
printf("What do you want to print : ");
scanf("%d",&ch);
switch(ch)
{
	case Natural:
		printf("\nNatural Numbers upto %d are :",n);
		for(i=1;i<=n;i++)
		{
			printf("\n%d",i);
		}
	break;
	case Even:
		printf("\nEven Numbers upto %d are :",n);
		for(i=2;i<=n;i+=2)
		{
			printf("\n%d",i);
		}
	break;
	case Odd:
		printf("\nOdd Numbers upto %d are :",n);
		for(i=1;i<=n;i+=2)
		{
			printf("\n%d",i);
		}
	break;
	case Prime:
		printf("\nPrime Numbers upto %d are :",n);
		for(i=2;i<n;i++)
		{
			prime=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					prime=0;
					break;
				}
			}
			if(prime)
			{	printf("\n%d",i);
			}
		}
	break;
	case Quit:
		clrscr();
		gotoxy(30,12);
		printf("Good Bye...........");
		getch();
		exit(0);
	default:
		clrscr();
		gotoxy(30,12);
		printf("Wrong Choice...........");
	break;
}
getch();
}
}



