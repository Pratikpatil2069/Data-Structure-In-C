#include<stdio.h>
#include<string.h>
char exp[20];
char s;
int top=-1;
int size;
char stack[100];
void push();
void pop();
int main()
{
	int i;
	printf("enter the expresion:\n");
	gets(exp);
	size=strlen(exp);
	for(i=0;i<=size;i++)
	{
		s=exp[i];
		if(s=='(')
		{
			push();
		}
		if(s==')')
		{
			if(top==-1)
			{
				printf("parenthess is not matched!!!\n");
				return 0;
			}
			pop();
		}
	}
	if(top==-1)
	{
		printf("parenthesis is matched!!!\n");
	}
	else
	{
		printf("parenthesis is not matched!!!\n");
	}
	
	return 0;
}
void push()
{
	if(top==size-1)
	{
		printf("stack is overflow!!!\n");
	}
	else
	{
		top++;
		stack[top]='(';
	}
}
void pop()
{
	if(top==-1)
	{
		printf("parenthessis is not matched!!!\n");
	}
	else
	{
		top--;
	}
}
