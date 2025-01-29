#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

struct node *head;
struct node*create(int number)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=number;
	newnode->next=NULL;
	return newnode;
}
void traversal(struct node*head)
{
	while(head!=NULL)
	{
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL");

}

void addFirst(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	struct node *newNode=create(num);
	if(head==NULL){
		newNode=head;
	}
	else{
		newNode->next=head;
		newNode=head;
	}
	
	printf("%d is Inserted!!\n",num);
}
int main()
{
	int n;
	printf("Enter the Number of Nodes:\n");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		addFirst();
	}
    traversal(head);
	return 0;
}
