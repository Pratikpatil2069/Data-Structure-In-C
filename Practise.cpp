#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void printlist(struct node*head,struct node*n1){
	struct node*temp=n1;
	do
	{
		printf("%d->",head->data);
		head=head->next;
	}
	while(head!=temp);
}
struct node*creat(){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	newnode->data=num;
	newnode->next=NULL;
	return newnode;
}
void insertAtfirst(struct node*n1,struct node*n6)
{
	struct node*newnode=creat();
	struct node*temp=n6;
    newnode->next=n1;
    temp->next=newnode;
	printlist(newnode,newnode);	
}
void insertAtlast(struct node*n1){
	struct node*newnode=creat();
	struct node*ptr;
	ptr=n1;
	while(ptr->next!=n1)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
	newnode->next=n1;
	printlist(n1,n1);
}
void insertAtrandom(struct node*n1,struct node*n6){
	struct node*newnode=creat();
	struct node*p,*ptr;
	p=n1;
	ptr=p->next;
	int ind;
	printf("enter the index to insert the node:\n");
	scanf("%d",&ind);
	for(int i=1;i<ind-1;i++)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=newnode;
	newnode->next=ptr;
	n6->next=n1;
	printlist(n1,n1);
}
deleteAtfirst(struct node*n1,struct node*n6){
	struct node*ptr;
	struct node*temp;
	temp=n6;
	ptr=n1;
	n1=n1->next;
	temp->next=n1;
	free(ptr);
	printlist(n1,n1);
	
}
void deleteAtlast(struct node*n1){
	struct node*ptr,*p;
	p=n1;
	ptr=p->next;
	while(ptr->next!=n1)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=n1;
	free(ptr);
	printlist(n1,n1);
	
}
void deleteAtrandom(struct node*n1){
	struct node*p,*ptr;
	p=n1;
	ptr=p->next;
	int ind;
	printf("enter the index:\n");
	scanf("%d",&ind);
	for(int i=1;i<ind-1;i++)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=ptr->next;
	free(ptr);
	printlist(n1,n1);
}
int main()
{
	struct node*n1=creat();
	struct node*n2=creat();
	struct node*n3=creat();
	struct node*n4=creat();
	struct node*n5=creat();
	struct node*n6=creat();
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=n1;
	printlist(n1,n1);
	int ch,choise;
	for(;1;)
	{
		printf("\nenter the choise:1.insertion,2.deletion:\n");
		scanf("%d",&choise);
		if(choise==1)
		{
			printf("enter the choise for insertion:1.atfirst,2.atrandom,3.atlast:\n");
			scanf("%d",&ch);
		}
		else if(choise==2)
		{
			printf("enter the choise for deletion:4.atfirst,5.atrandom,6.atlast,7.exit:\n");
			scanf("%d",&ch);
		}
		else
		{
			printf("wrong input!\n");
		}
	switch(ch)
	{
		case 1:
			insertAtfirst(n1,n6);
			break;
		case 2:	
		    insertAtrandom(n1,n6);
		    break;
		case 3:	
		    insertAtlast(n1);
			break;
		case 4:
			deleteAtfirst(n1,n6);
			break;
		case 5:
		    deleteAtrandom(n1);
			break;
		case 6:
		    deleteAtlast(n1);
			break;
		case 7:
		    exit(0);
			break;
		default:
		printf("wrong input!\n");				
		    		
	}
  }
	return 0;
}
