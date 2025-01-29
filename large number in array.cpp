#include<stdio.h>
int main()
{
	int a[100],n,i,large;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nentered array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	large=a[0];
	printf("\nlarge element in array:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("%d",large);
	return 0;
}
