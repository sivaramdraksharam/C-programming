#include<stdio.h>
#include<conio.h>
struct list
{
	int data;
	struct list *next;
};
typedef struct list node;

node *findpos(node *first,int key)
{
	node *list;
	list=first;
	while(list->next!=NULL && key>list->next->data)
	{
		list=list->next;
	}
return(list);
}

void insert(node *first,int n)
{
	node *new,*pos;
	new=(node*)malloc(sizeof(node));
	new->data=n;
	pos=findpos(first,n);
	new->next=pos->next;
	pos->next=new;
}

void createlist(node *header)
{
	int n;
	char ch;
	header->next=NULL;
	do
	{
		printf("\nEnter Value : ");
		scanf("%d",&n);
		insert(header,n);
		printf("\nDo You want to Add More (y/n) : ");
		fflush(stdin);
		ch=getchar();
	}while(tolower(ch)=='y');
	printf("\nList Created");
}

void display(node *header)
{
	node *list;
	if(header->next==NULL)
	{	printf("List is Empty");
		return;
	}
	list=header->next;
	while(list)
	{
		printf("\n%d",list->data);
		list=list->next;
	}
}

node *getlast(node *header)
{
	node *list;
	list=header->next;
	while(list->next)
	{
		list=list->next;
	}
return(list);
}

node *find(node *header,int key)
{
	node *list;
	list=header->next;
	while(list)
	{
		if(list->next->data==key)
		{
			return(list);
		}
	list=list->next;
	}
	return(NULL);
}

int search(node *header,int key)
{
	node *list;
	list=header->next;
	while(list)
	{
		if(list->data==key)
		{
			return(1);
		}
	list=list->next;
	}
return(0);
}

void delete(node *header)
{
	node *first,*temp,*pos,*last;
	int n;
	first=header->next;
	if(first==NULL)
	{
		printf("List is Empty");
		getch();
		return;
	}
	printf("\nEnter Data : ");
	scanf("%d",&n);
	if(!search(first,n))
	{
		printf("\nSorry Given Data Not found");
		return;
	}
	if(first->data==n)
	{
		temp=first->next;
		free(first);
		first=temp;
		header->next=first;
	}
	else
	{
		pos=find(first,n);
		last=getlast(first);
		if(pos->next==last)
		{
			free(last);
			last=pos;
			last->next=NULL;
		}
		else
		{
			temp=pos->next;
			pos->next=pos->next->next;
			free(temp);
		}
	}
printf("Deleted Successfully");
}

void insertnode(node *header)
{
int n;
if(header->next==NULL)
{
	printf("\nList is Empty");
	return;
}
printf("\nEnter n Value : ");
scanf("%d",&n);
insert(header,n);
printf("\nNode Inserted Successfully");
}

main()
{
node *header;
int n;
enum choice{Create=1,Insert,Delete,Display,Quit}ch;
header=(node *)malloc(sizeof(node));
header->next=NULL;
while(1)
{
	clrscr();
	gotoxy(20,5);
	printf("-----------------------------");
	gotoxy(25,6);
	printf("Ordered Linked List");
	gotoxy(20,7);
	printf("-----------------------------");
	gotoxy(22,8);
	printf("1. Create List");
	gotoxy(22,9);
	printf("2. Insert");
	gotoxy(22,10);
	printf("3. Delete");
	gotoxy(22,11);
	printf("4. Display");
	gotoxy(22,12);
	printf("5. Quit");
	gotoxy(20,14);
	printf("-----------------------------");
	gotoxy(20,16);
	printf("What do you want to do : ");
	scanf("%d",&ch);
	clrscr();
	switch(ch)
	{
		case Create:
			createlist(header);
		break;
		case Insert:
			insertnode(header);
		break;
		case Display:
			display(header);
		break;
		case Delete:
			delete(header);
		break;
		case Quit:
			gotoxy(22,12);
			printf("Thank You");
			getch();
			exit(0);
		default:
			printf("Wrong Choice");
		break;
	}
	getch();
}
}















