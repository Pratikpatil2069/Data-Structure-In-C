#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter tne number1:\n");
	scanf("%d",&a);
	printf("enter the number 2:\n");
	scanf("%d",&b);
	printf("enter the number 3:\n");
	scanf("%d",&c);
	if(a>b)
	{
	if(a>c)
	{
		printf("enter number %d is largest number",a);
    }
    else 
    {
    	printf("enter number %d is largest number",c);
	}
    }
    else if(b>c)
    {
    	printf("enter number %d is largest number",b);
    	
	}
    else
    {
    	printf("enter numher %d is largest number",c);
    	
	}
    	
	return 0;
}
