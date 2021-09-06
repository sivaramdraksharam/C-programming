main()
{
int a[5][5],b[5][5],res[5][5],i,j,row,col;
clrscr();
printf("\nEnter type of Matrix :\n");
scanf("%d%d",&row,&col);

clrscr();

printf("\nEnter %d x %d A Matrix :\n",row,col);
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&a[i][j]);
	}
}

printf("\nEnter %d x %d B Matrix :\n",row,col);
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&b[i][j]);
	}
}

for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		res[i][j]=a[i][j]+b[i][j];
	}
}

printf("\nResultant Matrix :\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("   %d",res[i][j]);
	}
printf("\n");
}

getch();
}

