#include<stdio.h>
int main()
{
	int a[100],i,n,ind,num;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray before insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		
	}
	printf("\nenter the insertion number:\n");
	scanf("%d",&num);
	printf("enter the index:\n");
	scanf("%d",&ind);
	for(i=n;i>=ind-1;i--)
	{
		a[i]=a[i-1];
	}
	a[ind]=num;
	printf("\narray after insertion:\n");
	for(i=0;i=n;i++)
	{
		printf("%d ",a[i]);
	}

	
	return 0;
	
	
}
