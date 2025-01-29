#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*creat(struct node*n1){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	int num;
	printf("entre the number:\n");
	scanf("%d",&num);
	newnode->data=num;
	newnode->next=NULL;
	return newnode;
}
void printlist(struct node*n1)
{
	struct node*head=n1;
	do
	{
		printf("%d->",head->data);
		head=head->next;
	}
	while(head!=n1);
}
int main()
{
	struct node*n1=creat(n1);
	struct node*n2=creat(n2);
	struct node*n3=creat(n3);
	struct node*n4=creat(n4);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n1;
	printlist(n1);
}
