#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i,ind,num,element;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray element befor insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter the array element in array ,that position you insert the another element:\n");
	scanf("%d",&element);
      for(i=0;i<n;i++)
      {
      	if(a[i]==element)
      	{
      		ind=i;
      		break;
		}
	  }
	  printf("\nenter the array element which you want to insert in array:\n");
	  scanf("%d",&num);
	for(i=n;i>=ind;i--)
	{
		a[i+1]=a[i];
	}
	a[ind]=num;
	printf("\narray element after insertion:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
}
