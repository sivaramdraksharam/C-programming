			/* QUEUES Using Arrays */
#include<stdio.h>
#include<conio.h>
#define MAX 5
int rear=-1,front=-1;
int queue[MAX];
void qinsert(int x)
{
	if(rear==MAX-1)
	{
		printf("Queue OverFlow");
	}
	else
	{
		queue[++rear]=x;
		/*rear++;
		queue[rear]=x;*/
		printf("Element Inserted");
	}
}

int qdelete()
{
	int x;
	if(front==rear)
	{
		printf("Underflow");
		return 0;
	}
	else
	{
		x=queue[++front];
		return x;
	}
}

void display()
{
	int i;
	if(front==rear)
	{
			printf("Underflow");
	}
	else
	{
		printf("Queue Elements");
		for(i=front+1;i<=rear;i++)
		{
			printf("%5d",queue[i]);
		}
	}
}


main()
{
int n;
enum choice{Insert=1,Delete,Display,Quit}ch;
clrscr();
while(1)
{
clrscr();
printf("\n\n\t-----------------------");
printf("\n\t\tQUEUE OPERATIONS");
printf("\n\t-----------------------");
printf("\n\t   1. INSERT");
printf("\n\t   2. DELETE");
printf("\n\t   3. DISPLAY");
printf("\n\t   4. QUIT");
printf("\n\t-----------------------");
printf("\n\n\tEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
	case Insert:
		printf("\nEnter Value : ");
		scanf("%d",&n);
		qinsert(n);
	break;
	case Delete:
		n=qdelete();
		printf("\n%d Deleted",n);
	break;
	case Display:
		printf("\nQueue Elements : ");
		display();
	break;
	case Quit:
		printf("Good Bye");
		getch();
		return;
	default:
		printf("\nWrong Choice");
	break;
}
getch();
}
}