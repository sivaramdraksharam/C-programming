			/* Matching of Parenthesis */
#include<stdio.h>
#include<conio.h>
#define SIZE 10
typedef struct
{
	char s[SIZE];
	int top;
}stack;


void init(stack *st)
{
	st->top=0;
	st->s[st->top]='#';
}

void push(stack *st,char ch)
{
	st->s[++st->top]=ch;
}

char pop(stack *st)
{
	char x;
	x=st->s[st->top--];
	return(x);
}

int isempty(stack *st)
{
	return(st->s[st->top]	=='#');
}



int isbalance(char *s)
{
	stack stk,*sp=&stk;
	char ch;
	init(sp);
	while(*s)
	{
		if(*s=='(' || *s=='[' || *s=='{')
		{
			push(sp,*s);
		}
		if(*s==')' || *s==']' || *s=='}')
		{
			ch=pop(sp);
			if((ch=='(' && *s!=')') || (ch=='[' && *s!=']') || (ch=='{' && *s!='}') || ch=='#')
			{
				return(0);
			}
		}
		*s++;
	}
	if(isempty(sp))
		return(1);
	else
		return(0);
}



main()
{
char str[30];
clrscr();
puts("Enter String : ");
gets(str);

if(isbalance(str))
	puts("Parenthesis Matched");
else
	puts("Parenthesis Not Matched");
getch();
}


