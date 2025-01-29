#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i,m;
	printf("entre the array size:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nreenter the array index:\n");
	scanf("%d",&m);
	printf("enter the array element:\n");
	a=(int*)realloc(a,m*sizeof(int));
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
}
