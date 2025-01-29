#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[100];
int size;
void push();
void pop();
void display();
int main()
{
	int ch,i;
	printf("enter the size of stack:\n");
	scanf("%d",&size);
	for(;1;)
	{
	printf("enter the choise:1.push(),2.pop(),3.display(),4.exit()\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			push();
			break;
		case 2:
		    pop();
			break;
		case 3:
		    display();
			break;
		case 4:
		    exit(0);
			break;
		default:
		printf("wrong intput!!!");				
	}
}
	return 0;
	
}
void push()
{ int num;
	if(top==size-1)
	{
		printf("stack is overflow!!!\n");
	}
	else
	{
		printf("enter the number:\n");
		scanf("%d",&num);
		top++;
		stack[top]=num;
		printf("pushed number is %d\n",stack[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is underflow!!!\n");
	}
	else
	{
		printf("poped element is %d\n",stack[top--]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("no element in stack!!!\n");
	}
	else
	{
	for(i=0;i<=size-1;i++)
	{
		printf("%d",stack[i]);
		printf("\n");
	}
    }

}
