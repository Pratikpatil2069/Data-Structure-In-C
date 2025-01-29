#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*n1=NULL;
struct node*creatnode(int num){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	return newnode;
}
void printlist(struct node*n1){
	while(n1!=NULL){
		printf("%d->",n1->data);
		n1=n1->next;
	}
	printf("NULL\n");
}
void begening(struct node*n1){
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	struct node*newnode=creatnode(num);
	newnode->next=n1;
	n1=newnode;
	printlist(n1);
}
void end(struct node*n1,struct node*n5){
	int num;
	printf("enter the number :\n");
	scanf("%d",&num);
	struct node*newnode=creatnode(num);
	n5->next=newnode;
	printlist(n1);
	
}
void random(){
	struct node *ptr=n1;
	int ind;
	printf("enter the index at that position insert node:\n");
	scanf("%d",&ind);
	for(int i=1;i<ind-1;i++){
		ptr=ptr->next;
	}
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	struct node*newnode=creatnode(num);
	newnode->next=ptr->next;
	ptr->next=newnode;
	printlist(n1);
}
void first(struct node*n1){
	struct node*ptr=n1;
	n1=n1->next;
	if(n1==NULL){
		printf("NULL");
	}
	else{
	free(ptr);
	printlist(n1);
    }
}
void last(struct node*n1){
	struct node*ptr=n1;
	struct node*p=n1;
	ptr=p->next;
	while(ptr->next!=NULL){
		ptr=ptr->next;
		p=p->next;
	}
	p->next=ptr->next;
     free(ptr);
	 printlist(n1);	
}
void randomposition(struct node*n1){
	struct node*ptr=n1;
	struct node*p=n1;
	int ind;
	printf("enter the index:\n");
	scanf("%d",&ind);
	ptr=p->next;
	for(int i=1;i<ind-1;i++){
		p=p->next;
		ptr=ptr->next;
	}
	p->next=ptr->next;
	free(ptr);
	printlist(n1);
	
}
 
int main(){
	struct node*n1=creatnode(10);
	struct node*n2=creatnode(20);
	struct node*n3=creatnode(30);
	struct node*n4=creatnode(40);
	struct node*n5=creatnode(50);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=NULL;
	printlist(n1);
	int ch;
	for(;1;){
	printf("enter the chose:insertion at 1.end,2.begening,3.randomposition.:deleting the node:4.frist,5.last,6.randomposition,7.exit:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			end(n1,n5);
			break;
		case 2:
		    begening(n1);
			break;
		case 3:
		    random();
			break;
		case 4:
		    first(n1);
			break;
		case 5:	
		    last(n1);
			break;
		case 6:
		    randomposition(n1);		
		case 7:
		    exit(0);
			break;
		default:
		printf("wrong input!");				
			
	}
}
	return 0;
}
