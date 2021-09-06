#include<stdio.h>
#include<conio.h>

struct it
{
int itno;
char itname[10];
float pr;
int qty;
float tot;
};

typedef struct it item;

main()
{
item itm[10],temp;
int n,i,j;
clrscr();
printf("\nHow many Products do you want to store : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
clrscr();
printf("\nEnter Product Details Record # %d",i+1);
printf("\nCode\t\t:\t");
scanf("%d",&itm[i].itno);
printf("\nName\t\t:\t");
scanf("%s",&itm[i].itname);
printf("\nPrice\t\t:\t");
scanf("%f",&itm[i].pr);
printf("\nQuantity\t:\t");
scanf("%d",&itm[i].qty);
itm[i].tot=itm[i].pr*itm[i].qty;
}

for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(stricmp(itm[i].itname,itm[j].itname)>0)
		{
			temp=itm[i];
			itm[i]=itm[j];
			itm[j]=temp;
		}
	}
}

printf("\nCode\tName\tPrice\tQty\tTotal");
for(i=0;i<n;i++)
{
	printf("\n%d\t%s\t%.2f\t%d\t%.2f",itm[i].itno,itm[i].itname,itm[i].pr,itm[i].qty,itm[i].tot);
}
getch();
}

void LinkFloat(void)
{
	float a=0,*b=&a;
	*b=0;
}
