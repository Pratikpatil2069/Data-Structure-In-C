#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stack{
 	int top;
 	int size;
 	char *stack;
};

struct Stack *s;

int isEmpty(){
	if(s->top==-1){
		return 1;
	}
	return 0;
}

int isFull(){
	if(s->top==s->size-1){
		return 1;
	}
	return 0;
}

void push(char val){
	if(isFull()){
		return;
	}
	
	s->top++;
	s->stack[s->top]=val;
	
}

char pop(){
	if(isEmpty()){
		return -1;
	}
	char val=s->stack[s->top];
	s->top--;
	return val;
}

char stackTop(){
	return s->stack[s->top];
}

int precedence(char op){
	
	if(op=='^'){
		return 4;
	}
	
	if(op=='*' || op=='/'){
		return 3;
	}
	if(op=='+' || op=='-'){
		return 2;
	}
	return 1;
	
}

char*infixToPostfix(char infix[]){
	
	int s=strlen(infix);
	
	int i=0,j=0;
	
	char *postfix=(char*)malloc(s+1*sizeof(char));
	
	while(infix[i]!='\0'){
		
		char ch=infix[i];
		
		if((ch>='a' && ch<='z')  || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
			postfix[j++]=ch;
		}
		else if(ch=='('){
			push(ch);
		}
		else if(ch==')'){
			while( stackTop()!='('){
				postfix[j++]=pop();
			}
			pop();
		}
		
		else if(precedence(ch)>precedence(stackTop())){
			push(ch);
		}
		else{
		postfix[j++]=pop();
	}
		
		i++;
	}
	
	while(!isEmpty()){
		postfix[j++]=pop();
	}
	
	postfix[j]='\0';
	
	return postfix;
}

 
int main(){
	
	s=(struct Stack*)malloc(sizeof(struct Stack));
	s->top=-1;
	s->size=50;
	s->stack=(char*)malloc(s->size*sizeof(char));
	
	char infix[20];
	printf("Enter the Infx Expression:\n");
	scanf("%s",&infix);
	
	printf("The Postfix conversion of %s is %s\n",infix,infixToPostfix(infix));
	
	return 0;
}
