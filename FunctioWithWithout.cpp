//program to add the two numbers
#include<stdio.h>
void add(int n1,int n2){
	int add;
	add=n1+n2;
	printf("The addition is %d\n",add);
}
int main(){
	int n1,n2;
	printf("Enter The Number 1:\n");
	scanf("%d",&n1);
	printf("Enter The Number 2:\n");
	scanf("%d",&n2);
	add(n1,n2);
	return 0;
}
