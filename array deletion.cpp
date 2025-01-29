#include<stdio.h>
int main()
{
	int a[100];
	int n,i;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	return 0;
}
