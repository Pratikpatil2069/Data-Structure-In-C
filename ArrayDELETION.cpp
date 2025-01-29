#include<stdio.h>
int main()
{
	int a[100];
	int n,i,ind;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("matrics\n");
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}
	printf("\nenter the deletion element index:\n");
	scanf("%d",&ind);
	for(i=ind;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("new array\n");
	for(i=0;i<n-1;i++)
	 {
	 	printf("%d",a[i]);
	 }
	return 0;
}
