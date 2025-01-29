#include<stdio.h>
int main()
{
	int n,reminder,orignal,number=0;
	printf("enter thr value of n:\n");
	scanf("%d",&n);
	orignal=n;
	for(;n!=0;){
		reminder=n%10;
		number=number*10+reminder;
		n=n/10;
	}
	if(orignal==number)
	{
		printf("enter number is palindrom");
	}
	else
	{
		printf("enter number is not palindrom");
		
	}
	return 0;
}
