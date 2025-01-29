#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	int *ptr=a;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("addition array elements :\n");
	for(i=0;i<n;i++)
	{
		sum=sum+ *ptr;
		ptr++;
	}
	printf("add=%d",sum);
	return 0;
	
}
