#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
	int top;
	int size;
	char *a;

};
void push(struct stack*,char);
void pop(struct stack*,char);
int isfull(struct stack*s)
{
	if(s->top==s->size-1)
	{
		return 1;
	}
	return 0;
}
int isempty(struct stack*s)
{
	if(s->top==-1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	char exp[20];
	char ch;
	printf("enter the expression:\n");
	scanf("%s",&exp);
	int i=0;
	s->size=strlen(exp)+1;
	s->a=(char*)malloc(s->size*sizeof(char));
	while(exp[i]!='\0')
	{
		ch=exp[i];
		if(ch=='(')
		{
			push(s,ch);
		}
		if(ch==')')
		{
			if(s->top==-1)
			{
				printf("parenthessis is not matched!");
				return 0;
			}
			pop(s,ch);
		}
		i++;
	}
	if(s->top==-1)
	{
		printf("parenthessis is matched!");
	}
	else
	{
		printf("parenthessi is not matched!");
	}
	return 0;
}
void push(struct stack *s,char ch)
{
	if(isfull(s))
	{
	   printf("stack is overflow!");
	}
	else
	{
		s->top++;
		s->a[s->top]=ch;
	}
}
void pop(struct stack *s,char ch)
{
	if(isempty(s))
	{
		printf("stack is underflow!");
	}
	else
	{
		int var;
		var=s->a[s->top];
		s->top--;
	}
}
