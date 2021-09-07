			/* Stacks using linked list */
#include<stdio.h>
#include<conio.h>
struct stack
{
	int data;
	struct stack *next;
};

typedef struct stack stk;
stk *top=NULL;

void push(int x)
{
	stk *node;
	node=(stk *)malloc(sizeof(stk));
	node->data=x;
	if(top==NULL)
	{
		top=node;
		top->next=NULL;
	}
	else
	{
		node->next=top;
		top=node;
	}
	printf("Node Inserted");
}

int pop()
{
	int x;
	stk *node;
	if(top==NULL)
	{
		printf("Stack is Empty");
		return(0);
	}
	x=top->data;
	node=top->next;
	free(top);
	top=node;
return(x);
}

void display()
{
	stk *list;
	if(top==NULL)
	{
		printf("Stack is Empty");
		return;
	}
	list=top;
	while(list!=NULL)
	{
		printf("%5d",list->data);
		list=list->next;
	}
}

main()
{
int n;
enum choice{PUSH=1,POP,DISPLAY,QUIT}ch;
clrscr();
while(1)
{
clrscr();
printf("\n\n\t-----------------------");
printf("\n\t\tSTACK OPERATIONS");
printf("\n\t-----------------------");
printf("\n\t   1. PUSH");
printf("\n\t   2. POP");
printf("\n\t   3. DISPLAY");
printf("\n\t   4. QUIT");
printf("\n\t-----------------------");
printf("\n\n\tEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
	case PUSH:
		printf("\nEnter Value : ");
		scanf("%d",&n);
		push(n);
	break;
	case POP:
		n=pop();
		printf("\n%d Popped",n);
	break;
	case DISPLAY:
		printf("\nStack Elements : ");
		display();
	break;
	case QUIT:
		printf("Good Bye");
		getch();
		return;
	default:
		printf("\nWrong Choice");
	break;
}
getch();
}
}
