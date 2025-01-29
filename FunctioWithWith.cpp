//program to add the two numbers
#include<stdio.h>
int add(int n1,int n2){
	int add=n1+n2;
	return add;
}
int main(){	
	int n1,n2,sum;
	printf("Enter The Number 1:\n");
	scanf("%d",&n1);
	printf("Enter The Number 2:\n");
	scanf("%d",&n2);
	sum=add(n1,n2);
	printf("The addition is %d\n",sum);
	return 0;
}
