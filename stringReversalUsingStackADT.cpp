#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
	int top;
	int size;
	int *a;
	char str[20];
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
	char ch;
	struct stack*s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	printf("enter the string:\n");
	gets(s->str);
	s->size=strlen(s->str);
	s->a=(int*)malloc(s->size*sizeof(int));
	for(int i=0;i<s->size;i++)
	{
		ch=s->str[i];
		push(s,ch);
	}
	printf("string reversal:-");
	pop(s,ch);
	return 0;
}
void push(struct stack*s,char ch)
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
void pop(struct stack*s,char ch)
{
	if(isempty(s))
	{
		printf("stack is underflow!");
	}
	else
	{
		int var;
		for(int i=s->top;i>=0;i--)
		{
			var=s->a[s->top];
			printf("%c",var);
		    s->top--;
	    }
	}
}
