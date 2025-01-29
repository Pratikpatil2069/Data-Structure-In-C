#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*createnode(int val)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=val;
	newnode->next=NULL;
	return newnode;
}
void traversal(struct node*n1)
{
	while(n1!=NULL)
	{
		printf("%d->",n1->data);
		n1=n1->next;
	}
	printf("NULL");

}
int main()
{
	struct node*n1=createnode(1);
	struct node*n2=createnode(2);
	struct node*n3=createnode(3);
	struct node*n4=createnode(4);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=NULL;
	traversal(n1);
	
	
	return 0;
}
