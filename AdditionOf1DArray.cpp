#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\naddition of array:\n");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
