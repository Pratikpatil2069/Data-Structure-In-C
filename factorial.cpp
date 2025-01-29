#include<stdio.h>
int main()
{
	long int n,i,fact=1;
	printf("enter the number:\n");
	scanf("%ld",&n);
	printf("factorial of number %ld\n",n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
		
	 } 
	 printf("%ld ",fact);
	return 0;
}

