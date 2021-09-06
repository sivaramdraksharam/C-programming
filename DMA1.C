#include<stdio.h>
#include<conio.h>
main()
{
int *x,n1,n2,i,sum=0;
float avg;
clrscr();
printf("\nEnter n Value : ");
scanf("%d",&n1);
x=(int*)malloc(n1*sizeof(int));
/* x=(int*)calloc(n1,sizeof(int)); */
if(x==NULL)
{
	printf("Sorry, Memory is not sufficient");
	getch();
	exit(1);
}
clrscr();
printf("\nEnter %d Values:\n",n1);
for(i=0;i<n1;i++)
{
	scanf("%d",x+i);
}
printf("\nHow many extra values do you want to add : ");
scanf("%d",&n2);
x=(int*)realloc(x,(n1+n2)*sizeof(int));
printf("\nEnter %d more values :\n",n2);
for(i=n1;i<(n1+n2);i++)
{
	scanf("%d",x+i);
}

for(i=0;i<(n1+n2);i++)
{
	printf("\n%d",*(x+i));
	sum=sum+*(x+i);
}
avg=sum/(float)(n1+n2);
printf("\nSum     : %d",sum);
printf("\nAverage : %.2f",avg);
free(x);
getch();
}






