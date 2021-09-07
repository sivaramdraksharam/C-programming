#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1,empty=1;
void qinsert()
{
	if(front==rear && empty==0)
	{
		printf("Queue Overflow");
	}
	else
	{
		rear++;
		printf("\nEnter Element : ");
		scanf("%d",&queue[rear]);
		if(rear==MAX-1)
			rear=-1;
		if(front==rear)
			empty=0;
		printf("Element Inserted");
	}
}

int qdelete()
{
	int x;
	if(front==rear && empty==1)
	{
		printf("Queue Underflow");
			return(0);
	}
	else
	{
		front++;
		x=queue[front];
		if(front==MAX-1)
		{
			front=-1;
			empty=1;
		}
	return(x);
	}
}

void display()
{
	int i;
	if(front==rear && empty==1)
	{
		printf("Queue Underflow");
	}
	else
	{
		printf("Queue Elements are : ");
		i=front;
		do
		{
			printf("\n%d",queue[++i]);
			if(i==MAX-1)
				i=-1;
		}while(i!=rear);
	}
}

main()
{
int n,ch;
while(1)
{
	clrscr();
	gotoxy(20,5);
	printf("-----------------------------");
	gotoxy(25,6);
	printf("Circular Queue");
	gotoxy(20,7);
	printf("-----------------------------");
	gotoxy(22,8);
	printf("1. Insert ");
	gotoxy(22,9);
	printf("2. Delete");
	gotoxy(22,10);
	printf("3. Display");
	gotoxy(22,11);
	printf("4. Exit");
	gotoxy(22,12);
	printf("------------------------------");
	gotoxy(20,14);
	printf("What do you want to do : ");
	scanf("%d",&ch);
	clrscr();
	switch(ch)
	{
		case 1:
			qinsert();
		break;
		case 2:
			n=qdelete();
			if(n)
				printf("%d has been deleted",n);
		break;
		case 3:
			display();
		break;
		case 4:
			exit(0);
		default:
			printf("Wrong Choice");
		break;
	}
	getch();
}
}

