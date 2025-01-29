#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
};
void printlist(struct node*head){
	printf("NULL->");
	while(head!=NULL)
	{
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}
void printlistRev(struct node*head){
	printf("NULL->");
	while(head!=NULL)
	{
		printf("%d->",head->data);
		head=head->prev;
	}
	printf("NULL");
}
struct node*creat(){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	newnode->data=num;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}
void insertAtfirst(struct node*n1){
	struct node*newnode=creat();
	newnode->next=n1;
	n1->prev=newnode;
	newnode->prev=NULL;
	printlist(newnode);
}
void insertAtrandom(struct node*n1){
	struct node*newnode=creat();
	struct node*p,*ptr;
	p=n1;
	ptr=p->next;
	int ind;
	printf("enter the insdex:\n");
	scanf("%d",&ind);
	for(int i=1;i<ind-1;i++)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=newnode;
	newnode->prev=p;
	newnode->next=ptr;
	ptr->prev=newnode;
	printlist(n1);
}
void insertAtlast(struct node*n1){
	struct node*newnode=creat();
	struct node*ptr;
	ptr=n1;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	newnode->prev=ptr;
    ptr->next=newnode;
	newnode->next=NULL;
	printlist(n1);
}
void deleteAtfirst(struct node*n1){
	struct node*ptr;
	ptr=n1;
	n1=n1->next;
	n1->prev=NULL;
	free(ptr);
	printlist(n1);
}
void deleteAtlast(struct node*n1){
	struct node*p,*ptr;
	p=n1;
	ptr=p->next;
	while(ptr->next!=NULL)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=NULL;
	ptr->prev=NULL;
	free(ptr);
	printlist(n1);
}
void deleteAtrandom(struct node*n1){
	struct node*p,*ptr;
	p=n1;
	ptr=p->next;
	int ind;
	printf("enter the index:\n");
	scanf("%d",&ind);
	for(int i=1;i<ind-1;i++){
		p=p->next;
		ptr=ptr->next;
	}
	p->next=ptr->next;
	ptr->prev=NULL;
	ptr->next=NULL;
	free(ptr);
	printlist(n1);
}
int main()
{
	struct node*n1=creat();
	struct node*n2=creat();
	struct node*n3=creat();
	struct node*n4=creat();
	struct node*n5=creat();
	struct node*n6=creat();
	n1->prev=NULL;
	n1->next=n2;
	n2->prev=n1;
	n2->next=n3;
	n3->prev=n2;
	n3->next=n4;
	n4->prev=n3;
	n4->next=n5;
	n5->prev=n4;
	n5->next=n6;
	n6->prev=n5;
	n6->next=NULL;
	printf("linked list:-");
	printlist(n1);
	printf("reverse linked list:-");
	printlistRev(n6);
	int ch;
	for(;1;)
	{
		printf("\nenter the choise:-1.insertAtfirst,2.insertAtrandom,3.insertAtlast,4.deleteAtfirst,5.deleteAtrandom,6.deleteAtlast,7.exit:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertAtfirst(n1);
				break;
			case 2:
			    insertAtrandom(n1);
				break;
			case 3:
			    insertAtlast(n1);
				break;
			case 4:
			    deleteAtfirst(n1);
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
