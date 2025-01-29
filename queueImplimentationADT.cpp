#include<stdio.h>
#include<stdlib.h>
struct queue{
	int front;
	int rear;
	int size;
	int *a;
};
int isempty(struct queue*q){
	if(q->front==-1&&q->rear==-1)
	{
		return 1;
	}
	return 0;
}
int isfull(struct queue*q){
	if(q->rear==q->size-1)
	{
		return 1;
	}
	return 0;
}
void enqueue(struct queue*q){
	if(isfull(q))
	{
		printf("queue is full!\n");
	}
	else
	{
		if(q->front==-1 && q->rear==-1)
		{
			int num;
			q->rear=0;
			q->front=0;
			printf("enter the number:\n");
			scanf("%d",&num);
			q->a[q->rear]=num;
			printf("%d is enqueued\n",q->a[q->rear]);
		}
		else
		{
			q->rear++;
			int num;
			printf("enter the number:\n");
			scanf("%d",&num);
			q->a[q->rear]=num;
			printf("%d is enqueued\n",q->a[q->rear]);
			
		}
	}
}
void dequeue(struct queue*q)
{
	if(isempty(q))
	{
		printf("queue is empty!\n");
	}
	else
	{
		if(q->front==q->rear)
		{
			printf("%d is dequeue",q->a[q->front]);
			q->front=-1;
			q->rear=-1;
		}
		else
		{
		int var;
		var=q->a[q->front];
		printf("%d is dequeue\n",var);
		q->front++;
	    }
    }
}
void display(struct queue*q){
	if(isempty(q))
	{
		printf("no element in queue\n");
	}
	else
	{
		for(int i=q->front;i<=q->rear;i++)
		{
			printf("%d ",q->a[i]);
		}
	}
}
int main()
{
	struct queue*q=(struct queue*)malloc(sizeof(struct queue));
	q->front=-1;
	q->rear=-1;
	printf("enter the size of queue:\n");
	scanf("%d",&q->size);
	q->a=(int*)malloc(q->size*sizeof(int));
	int ch;
	for(;1;)
	{
	   printf("enter the choise:1.enqueue,2.dequeue,3.display,4.exit:\n");
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
		    printf("wrong input!\n");		 	
		      	
	   }
	}
	return 0;
}
