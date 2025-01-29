#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	if(n==1 && n==0){
		flag=1;
	}
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
	if(flag==1)
	{
		printf("enter number is not prime");
		
	}
	else
	{ 
	  printf("enter number is prime");
	}
	return 0;
}
