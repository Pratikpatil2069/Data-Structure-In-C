//program to add the two numbers
#include<stdio.h>
int add(){
	int n1,n2,add;
	printf("Enter The Number 1:\n");
	scanf("%d",&n1);
	printf("Enter The Number 2:\n");
	scanf("%d",&n2);
	add=n1+n2;
	return add;
}
int main(){	
	int sum=add();
	printf("The addition is %d\n",sum);
	return 0;
}
