#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *a;
};
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
void push(struct stack*);
void pop(struct stack*);
void display(struct stack*);
void peek(struct stack*);
int main()
{
	struct stack*s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	printf("enter the size of stack:\n");
	scanf("%d",&s->size);
	s->a=(int*)malloc(s->size*sizeof(int));
	int ch;
	while(1)
	{
		printf("enter the choise:1.push,2.pop,3.display,4.peek,5.exit:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push(s);
				break;
			case 2:
			    pop(s);
				break;
			case 3:
			    display(s);
				break;
			case 4:
			    peek(s);
				break;
			case 5:
			    exit(0);
				break;
			default:
			printf("wrong input!\n");				
		}
	}
	return 0;
}
void push(struct stack*s)
{
	if(isfull(s))
	{
		printf("stack is full!\n");
	}
	else
	{
		s->top++;
		printf("enter the number:\n");
		int num;
		scanf("%d",&num);
		s->a[s->top]=num;
		printf("%d is pushed\n",s->a[s->top]);
	}
}
void pop(struct stack*s)
{
	if(isempty(s))
	{
		printf("stack is empty\n");
	}
	else
	{
		int var;
		var=s->a[s->top];
		s->top--;
		printf("%d is poped\n",var);
	}
}
void display(struct stack*s)
{
	if(isempty(s))
	{
		printf("stack is empty\n");
	}
	else
	{
		for(int i=s->top;i>=0;i--)
		{
			printf("%d",s->a[i]);
			printf("\n");
		}
	}
}
void peek(struct stack*s)
{
	if(isempty(s))
	{
		printf("no element in stack!\n");
	}
	else
	{
		int pos;
		int ind;
		printf("enter the position:\n");
		scanf("%d",&pos);
		if(pos>-1&&pos<s->size)
		{
		ind=(s->top+1)-pos;
		printf("peeked=%d\n",s->a[ind]);
        }
        else
        {
        	printf("wrong input!\n");
		}
	}
}


