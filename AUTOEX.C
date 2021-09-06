main()
{
	int x=10;
	{
		int x=20;
		int y=30;
		{
			int x=50;
			int z=100;
			clrscr();
			printf("\n x = %d",x);
			printf("\n y = %d",y);
			printf("\n z = %d",z);
		}
		printf("\n x = %d",x);
		printf("\n y = %d",y);
		/* printf("\n z = %d",z);  */
	}
printf("\n x = %d",x);
/* printf("\n y = %d",y); */
getch();
}