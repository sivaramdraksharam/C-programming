			/* Float Demo */
#include<stdio.h>
#include<conio.h>
main()
{
int itno,qty;
char itname[12];
float pr,tot,dis;
clrscr();
printf("\nEnter Item Number : ");
scanf("%d",&itno);
printf("\nEnter Item Name : ");
scanf("%s",&itname);
printf("\nEnter Price : ");
scanf("%f",&pr);
printf("\nEnter Quantity : ");
scanf("%d",&qty);

tot=pr*qty;
printf("\nGross Total : %.2f",tot);

if(tot>=1000)
{
	dis=tot*10/100.0;
	tot-=dis;
	printf("\nDiscount : %.2f",dis);
}

printf("\nNet Total : %.2f",tot);
getch();
}
