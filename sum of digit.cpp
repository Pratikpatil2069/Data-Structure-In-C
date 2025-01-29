#include<stdio.h>
int main()
{
	int n,num,sum=0;
	printf("enter the value of n :\n");
	scanf("%d",&n);
	printf("sum of digit:");
	while(n!=0)
	{
	num=n%10;
	sum=sum+num;
	n=n/10;
    }
    printf("%d",sum);
    return 0;
}
