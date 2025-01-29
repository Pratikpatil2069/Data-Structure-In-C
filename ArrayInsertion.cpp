#include<stdio.h>
int main()
{
	int a[100];
	int i,n,ind,num;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter tha array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter The number to insert:\n");
	scanf("%d",&num);
	printf("enter the array insertion index:\n");
	scanf("%d",&ind);
	for(i=n-1;i>=ind-1;i--){
		a[i+1]=a[i];
	}
	a[ind-1]=num;
	n+=1;
	printf("the array after after:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
	return 0;
}
