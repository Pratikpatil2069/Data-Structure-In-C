//Program to claculate fibbonacci series at given number
#include<stdio.h>
int main(){
	int i,n,n1=0,n2=1;
	long long int n3;
	printf("Enter the number for fibbonacci series:\n");
	scanf("%d",&n);
	printf("Fibbonacci series of given number:\n");
	printf("%d  %d  ",n1,n2);
	for(i=2;i<=n;i++){
		n3=n1+n2;
		printf("%lld  ",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
