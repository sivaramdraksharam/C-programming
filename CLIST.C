#include<stdio.h>
#include<conio.h>
struct list
{
	int data;
	struct list *next;
};
typedef struct list node;

node *createlist()
{
	node *first,*last,*new;
	char ch;
	first=last=NULL;
	do
	{
		new=(node *)malloc(sizeof(node));
		printf("\nEnter Value : ");
		scanf("%d",&new->data);
		if(first==NULL)
		{
			first=last=new;
			first->next=NULL;
		}
		else
		{       last->next=new;
			last=new;
			last->next=first;
		}
		printf("\nDo You want to Add More (y/n) : ");
		fflush(stdin);
		ch=getchar();
	}while(tolower(ch)=='y');
return(first);
}

void display(node *first)
{
	node *list;
	list=first;
	do
	{
		printf("\n%d",list->data);
		list=list->next;
	}while(list!=first);
}

node *getlast(node *first)
{
	node *list;
	list=first;
	do
	{
		list=list->next;
	}while(list->next!=first);
return(list);
}

node *insertfirst(node *first)
{
	node *new,*last;
	if(first==NULL)
	{
		printf("List is Empty");
		getch();
		return NULL;
	}
	new=(node *)malloc(sizeof(node));
	printf("\nEnter Data : ");
	scanf("%d",&new->data);
	last=getlast(first);
	new->next=first;
	first=new;
	last->next=first;
	return(first);
}



void insertlast(node *first)
{
	node *last,*new;
	if(first==NULL)
	{
		printf("List is Empty");
		getch();
		return;
	}
	new=(node *)malloc(sizeof(node));
	printf("\nEnter Data : ");
	scanf("%d",&new->data);
	last=getlast(first);
	last->next=new;
	last=new;
	last->next=first;
}

node *find(node *first,int key)
{
	node *list;
	list=first;
	do
	{
		if(list->next->data==key)
		{
			return(list);
		}
	list=list->next;
	}while(list!=first);
	return(NULL);
}

int search(node *first,int key)
{
	node *list;
	list=first;
	do
	{
		if(list->data==key)
		{
			return(1);
		}
	list=list->next;
	}while(list!=first);
return(0);
}

node *insertbefore(node *first)
{
	node *new,*pos,*last;
	int n;
	if(first==NULL)
	{
		printf("List is Empty");
		getch();
		return NULL;
	}
	printf("\nEnter Data : ");
	scanf("%d",&n);
	if(!search(first,n))
	{
		printf("\nSorry Given Data Not found");
		return first;
	}
        new=(node *)malloc(sizeof(node));
	printf("\nEnter Data : ");
	scanf("%d",&new->data);
	last=getlast(first);
	if(first->data==n)
	{
		new->next=first;
		first=new;
		last->next=first;
	}
	else
	{
		pos=find(first,n);
		new->next=pos->next;
		pos->next=new;
	}
printf("\nData Inserted Successfully");
return(first);
}

void insertafter(node *first)
{
	node *new,*pos,*last;
	int n;
	if(first==NULL)
	{
		printf("List is Empty");
		getch();
		return;
	}
	printf("\nAfter Which Data Data : ");
	scanf("%d",&n);
	if(!search(first,n))
	{
		printf("\nSorry Given Data Not found");
		return;
	}
        new=(node *)malloc(sizeof(node));
	printf("\nEnter Data : ");
	scanf("%d",&new->data);
	if(first->data==n)
	{
		new->next=first->next;
		first->next=new;
	}
	else
	{
		pos=find(first,n);
		last=getlast(first);
		if(pos->next==last)
		{
			last->next=new;
			last=new;
			last->next=first;
		}
		else
		{
			new->next=pos->next->next;
			pos->next->next=new;
		}
	}
printf("\nData Inserted Successfully");
}

node *delete(node *first)
{
	node *temp,*pos,*last;
	int n;
        if(first==NULL)
	{
		printf("List is Empty");
		getch();
		return NULL;
	}
	printf("\nEnter Data : ");
	scanf("%d",&n);
	if(!search(first,n))
	{
		printf("\nSorry Given Data Not found");
		return first;
	}
	last=getlast(first);
	if(first->data==n)
	{
		temp=first->next;
		free(first);
		first=temp;
		last->next=first;
	}
	else
	{
		pos=find(first,n);

		if(pos->next==last)
		{
			free(last);
			last=pos;
			last->next=first;
		}
		else
		{
			temp=pos->next;
			pos->next=pos->next->next;
			free(temp);
		}
	}
printf("Deleted Successfully");
return(first);
}

void update(node *first)
{
	node *pos;
	int n;
        if(first==NULL)
	{
		printf("List is Empty");
		getch();
		return;
	}
	printf("\nEnter Data to Update : ");
	scanf("%d",&n);
	if(!search(first,n))
	{
		printf("\nSorry Given Data Not found");
		return;
	}
	pos=find(first,n);
	printf("\nEnter New Data : ");
	scanf("%d",&pos->next->data);
	printf("Data Updated Successfully");
}

main()
{
node *first=NULL;
int n;
enum choice{Create=1,InsertFirst,InsertBefore,InsertAfter,InsertLast,Delete,Search,Update,Display,Quit}ch;
while(1)
{
	clrscr();
	gotoxy(20,5);
	printf("-----------------------------");
	gotoxy(25,6);
	printf("Circular Linked List");
	gotoxy(20,7);
	printf("-----------------------------");
	gotoxy(22,8);
	printf("1. Create List");
	gotoxy(22,9);
	printf("2. Insert First");
	gotoxy(22,10);
	printf("3. Insert Before");
	gotoxy(22,11);
	printf("4. Insert After");
	gotoxy(22,12);
	printf("5. Insert Last");
	gotoxy(22,13);
	printf("6. Delete");
	gotoxy(22,14);
	printf("7. Search");
	gotoxy(22,15);
	printf("8. Update List");
	gotoxy(22,16);
	printf("9. Display List");
	gotoxy(22,17);
	printf("10. Quit");
	gotoxy(20,18);
	printf("-----------------------------");
	gotoxy(20,20);
	printf("What do you want to do : ");
	scanf("%d",&ch);
	clrscr();
	switch(ch)
	{
		case Create:
			first=createlist();
			printf("\nList Created");
		break;
		case InsertFirst:
			first=insertfirst(first);
		break;
		case InsertBefore:
			first=insertbefore(first);
		break;
		case InsertAfter:
			insertafter(first);
		break;
		case InsertLast:
			insertlast(first);
		break;
		case Search:
			printf("\nEnter n Value to Search : ");
			scanf("%d",&n);
			if(search(first,n))
			{
				printf("Value Found");
			}
			else
			{
				printf("Not Found");
			}
		break;
		case Update:
			update(first);
		break;
		case Delete:
			first=delete(first);
		break;
		case Display:
			display(first);
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