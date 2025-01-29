//implementing Malloc Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*a,i,m;
	printf("Enter The Array Size:\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter The Array Elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered The Array Elements:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nReEnter The Array Size :\n");
	scanf("%d",&m);
	a=(int*)realloc(a,m*sizeof(int));
	printf("ReEnter The Array Elements:\n");
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("ReEntered The Array Elements:\n");
	for(i=0;i<m;i++){
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
}
