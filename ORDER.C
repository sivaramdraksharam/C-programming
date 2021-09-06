#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char names[10][12],tname[12];
int n,i,j;
clrscr();
printf("How many Names : ");
scanf("%d",&n);
clrscr();
printf("\nEnter %d Names :\n",n);
for(i=0;i<n;i++)
{
	fflush(stdin);
	gets(names[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(stricmp(names[i],names[j])>0)
		{
			strcpy(tname,names[i]);
			strcpy(names[i],names[j]);
			strcpy(names[j],tname);
		}
	}
}
printf("\nAlphabetical Order :\n");
for(i=0;i<n;i++)
{
	puts(names[i]);
}
getch();
}
