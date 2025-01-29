#include<stdio.h>
int main()
{
	int a[100],i,n,ind,num,flag=0;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements in sorted manner:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nenter the Number to search:\n");
	scanf("%d",&num);
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==num){
			ind=mid;
			flag=1;
			break;
		}
		else if(num<a[mid]){
			high=mid-1;
		}
		else if(num>a[mid]){
			low=mid+1;
		}
	}
	if(!flag){
		printf("Number Not found!");
	}
	else{
		printf("%d is Found At %d",num,ind+1);
	}
	return 0;
}
