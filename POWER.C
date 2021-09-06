long int power(int,int);
main()
{
int x,n;
long int r;
clrscr();
printf("\nEnter x value : ");
scanf("%d",&x);
printf("\nEnter x value : ");
scanf("%d",&n);
r=power(x,n);
printf("\n%d to the power of %d is %ld",x,n,r);
getch();
}

long int power(int x,int n)
{
	long int f;
	if(n==1)
		return(x);
	f=x*power(x,n-1);
}



