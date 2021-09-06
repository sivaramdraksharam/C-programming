#include<stdio.h>
#include<conio.h>
void sort(int *,int);
main()
{
int x[5],i;
clrscr();
printf("\nEnter 5 Values :\n");
for(i=0;i<5;i++)
{
	scanf("%d",&x[i]);
}

sort(x,5);

printf("\nAfter Sorting : ");
for(i=0;i<5;i++)
{
	printf("\n%d",x[i]);
}
getch();
}


void sort(int *a,int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}

}
