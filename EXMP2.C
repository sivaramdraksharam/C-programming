main()
{
int x,y;
clrscr();
x=5;
y=++x + x++ + --x;
printf("\nx= %d",x);	/* 6 */
printf("\ny= %d",y);	/* 15 */
x=5;
x=++x + x++ + --x;
printf("\nx= %d",x); 	/* 16 */
x=5;
printf("\nx= %d",++x + x++ + --x);	/* 18 */
getch();
}
