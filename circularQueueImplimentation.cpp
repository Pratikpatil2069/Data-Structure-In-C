#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int front;
	int rear;
	int *a;
};
void enqueue(struct queue*);
void dequeue(struct queue*);
void display(struct queue*);
int isfull(struct queue*q)
{
	if((q->rear+1)%q->size==q->front)
	{
	    return 1;	
	}
	return 0;
}
int isempty(struct queue*q)
{
	if(q->rear==-1&&q->front==-1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	struct queue*q;
	q=(struct queue*)malloc(sizeof(struct queue));
	q->front=-1;
	q->rear=-1;
	int ch;
	printf("enter the size of queue:\n");
	scanf("%d",&q->size);
	q->a=(int*)malloc(q->size*sizeof(int));
	for(;1;)
	{
		printf("enter the choise:1.enqueu,2.dequeue,3.display,4.exit:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue(q);
				break;
			case 2:
			    dequeue(q);
				break;
			case 3:
			    display(q);
				break;
			case 4:
			    exit(0);
				break;
			default:
			printf("wrong input!");			 			
		}
	}
	return 0;
}
void enqueue(struct queue*q)
{
	if(isfull(q))
	{
		printf("queue is overflow!\n");
	}
	else if(q->front==-1&&q->rear==-1)
	{
		int num;
	   q->front=0;
	   q->rear=0;
	   printf("enter the number:\n");
	   scanf("%d",&num);
	   q->a[q->rear]=num;
	   printf("%d is enqueued:\n",q->a[q->rear]);	
	}
	else
	{
		int num;
		printf("enter the number:\n");
		scanf("%d",&num);
		q->rear=(q->rear+1)%q->size;
		q->a[q->rear]=num;
		printf("%d is enqueued:\n",q->a[q->rear]);
	}
	
}
void dequeue(struct queue*q)
{
	if(isempty(q))
	{
		printf("queue is underflow!\n");
	}
	else if(q->front==q->rear)
	{
		printf("%d is dequeued\n",q->a[q->front]);
		q->front=-1;
		q->rear=-1;
	}
	else
	{
		int var;
		var=q->a[q->front];
		printf("%d is dequeued\n",var);
		q->front=(q->front+1)%q->size;
	}
}
void display(struct queue*q)
{
	if(isempty(q))
	{
		printf("no element in queue!\n");
	}
	else
	{
		for(int i=q->front;i!=q->size;i=(i+1)%q->size){
			
			printf("%d",q->a[i]);
			printf("\n");
			if(i==q->rear){
				break;
			}
		}
	}
}
