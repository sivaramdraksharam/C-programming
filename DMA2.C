#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int n,i,j,l;
char *names[10],tname[12],*str;
clrscr();
printf("\nHow many Name do you want to enter: ");
scanf("%d",&n);
clrscr();
printf("\nEnter %d Names:\n",n);
for(i=0;i<n;i++)
{
	fflush(stdin);
	gets(tname);
	l=strlen(tname);
	str=(char*)malloc(l+1);
	strcpy(str,tname);
	names[i]=str;
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(stricmp(names[i],names[j])>0)
		{
			str=names[i];
			names[i]=names[j];
			names[j]=str;
		}
	}
}

printf("\nAlphabetical Order:\n");
for(i=0;i<n;i++)
{
	puts(names[i]);
}

getch();
}






