#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("addition of one to n numbers:\n");
	for(i=n;i>=0;i--)
	{
		sum=sum+i;

	}
	printf("%d ",sum);
	return 0;
}
