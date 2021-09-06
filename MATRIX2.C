main()
{
int x[5][5],t[5][5],i,j,row,col;
clrscr();
printf("\nEnter type of Matrix :\n");
scanf("%d%d",&row,&col);

clrscr();

printf("\nEnter %d x %d Matrix :\n",row,col);
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&x[i][j]);
	}
}

for(i=0;i<col;i++)
{
	for(j=0;j<row;j++)
	{
		t[i][j]=x[j][i];
	}
}

printf("\nTranpose of the Given Matrix :\n");
for(i=0;i<col;i++)
{
	for(j=0;j<row;j++)
	{
		printf("   %d",t[i][j]);
	}
printf("\n");
}

getch();
}

