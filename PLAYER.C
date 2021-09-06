typedef struct
{
char pname[12];
char game[10];
int rank;
}player;

main()
{
player p,*ptr=&p;
clrscr();
printf("\nEnter Player Name : ");
scanf("%s",&ptr->pname);
printf("\nEnter Player Game : ");
scanf("%s",&ptr->game);
printf("\nEnter Rank : ");
scanf("%d",&ptr->rank);
clrscr();
printf("\nPlayer Name : %s",ptr->pname);
printf("\nPlayer Game : %s",ptr->game);
printf("\nRank : %d",ptr->rank);
getch();
}
