#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i,ind;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray elements before deletion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter the array element index which you want to delete:\n");
	scanf("%d",&ind);
	for(i=ind-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("array element after deletion:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
}
