#include"myfile.h"
void increase();
void decrease();
int x;
main()
{
clrscr();
printf("\nCurrent Value of x : %d",x);
increase();
increase();
calc();
decrease();
decrease();
getch();
}

void increase()
{
x++;
printf("\nValue of x after increment %d",x);
}

void decrease()
{
x--;
printf("\nValue of x after decrement %d",x);
}
