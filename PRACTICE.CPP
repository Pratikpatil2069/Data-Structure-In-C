#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

struct node*head=NULL;

struct node*creat(){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	newnode->data=num;
	newnode->next=NULL;
	return newnode;
}
void printlist(){
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
void insertAtfirst(){
	struct node*newnode=creat();
	newnode->next=head;
	head=newnode;
	printlist();
	
}
void insertAtlast(){
	struct node*newnode=creat();
	struct node*ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=newnode;
	printlist();
}
void insertAtrandom(){
	struct node *newnode=creat();
	struct node*p,*ptr;
	p=head;
	ptr=head->next;
	int ind;
	printf("enter the index:\n");
	scanf("%d",&ind);
	for(int i=1;i<ind-1;i++)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=newnode;
    newnode->next=ptr;
    printlist();

}
void deleteAtfirst(){
	struct node*ptr;
	ptr=head;
	head=head->next;
    free(ptr);
	printlist();
}
void deleteAtlast()
{
	struct node*p,*ptr;
	p=head;
	ptr=ptr->next;
	while(ptr->next!=NULL)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=NULL;
	free(ptr);
	printlist();
}
void deleteAtrandom()
{
	struct node*p,*ptr;
	p=head;
	ptr=head->next;
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
	printlist();
}
int main()
{
	
	int ch;
	for(;1;)
	{
		printf("\nenter the choise:1.insertAtfirst,2.insertAtlast,3.insertAtrandom,4.deleteAtfirst,5.deleteAtlast,6.deleteAtrandom,7.printlist,8.exit:\n");
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
