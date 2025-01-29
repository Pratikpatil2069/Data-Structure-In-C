#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head;
struct node*createnode(){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	newnode->data=num;
    newnode->next=NULL;
    return newnode;
}
void insertAtfirst(){
	struct node*newnode=createnode();
	struct node*temp=head;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		newnode->next=head;
		head=newnode;
		temp->next=head;
	}
	printf("%d is inerted\n",newnode->data);
}
void insertAtlast(){
	struct node*newnode=createnode();
	struct node*temp=head;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
	}
	printf("%d is inserted\n",newnode->data);
}
void insertAtrandom(){
	struct node*newnode=createnode();
	struct node*temp,*ptr;
	int ind;
	printf("enter the index to insert the node:\n");
	scanf("%d",&ind);
	temp=head;
	ptr=temp->next;
	for(int i=1;i<ind-1;i++)
	{
		temp=temp->next;
		ptr=ptr->next;
	}
	temp->next=newnode;
	newnode->next=ptr;
	printf("%d is inserted\n",newnode->data);
}
void deleteAtfirst(){
	struct node*ptr=head;
	struct node*temp=head;
	if(head==NULL)
	{
		printf("linked list underflow!\n");
		return;
	}
	else if(ptr->next==NULL)
	{
		head=NULL;
		free(ptr);
		printf("NULL\n");
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		head=head->next;
		temp->next=head;
		printf("%d is deleted\n",ptr->data);
		free(ptr);
	}	
}
void deleteAtlast(){
	struct node*ptr=head;
	struct node*temp=head;
	
	if(ptr->next==NULL)
	{
		head=NULL;
		free(ptr);
		printf("NULL\n");
	}
	else
	{
		ptr=temp->next;
		while(ptr->next!=head)
		{
			temp=temp->next;
			ptr=ptr->next;
		}
		temp->next=head;
		printf("%d is deleted\n",ptr->data);
		free(ptr);
	}
}
void deleteAtrandom(){
	struct node*temp,*ptr;
	temp=head;
	ptr=temp->next;
	int ind;
	printf("enter the index to delete the node\n");
	scanf("%d",&ind);
	for(int i=1;i<ind-1;i++)
	{
		temp=temp->next;
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	printf("%d is deleted\n",ptr->data);
	free(ptr);
}
void printlist(){
	struct node*temp=head;
	do
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	while(temp!=head);
}
int main()
{
	int ch;
	for(;1;)
	{
	printf("\nenter the choice:-1.insrerAtfirst,2.insertAtlast,3.insertAtrandom,4.deleteAtfirst,5.deleteAtlast,6.deleteAtrandom,7.printlist,8.exit:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insertAtfirst();
			break;
		case 2:
		    insertAtlast();	
		    break;
		case 3:
		    insertAtrandom();
			break;
		case 4:
		    deleteAtfirst();
			break;
		case 5:
		    deleteAtlast();
			break;
		case 6:
		    deleteAtrandom();
			break;
		case 7:
		    printlist();
			break;
		case 8:
		    exit(0);
			break;
		default:
		    printf("wrong input!\n");						    
	}
}
	return 0;
}
