#include<stdio.h>
int fact(int n){
	if(n==0){
		return 0;
	}
	
	if(n==1){
		return 1;
	}
	return n+fact(n-1);
}
int main(){
	int n,re;
	printf("Enter The Number:\n");
	scanf("%d",&n);
	re=fact(n);
	printf("The addition of %d is %d",n,re);
	return 0;
}
