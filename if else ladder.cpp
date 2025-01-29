#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("enter number is positive");
	}
	else if(a==0)
		{
		printf("enter number is zero");
	    }
		else
		 {
		   printf("enter number is negative");
	     }
    
	return 0;
}
