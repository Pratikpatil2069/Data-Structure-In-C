#include<stdio.h>
int main()
{
	int a,b,div;
	int *p,*q;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	div=*p/ *q;
	printf("div=%d",div);
	return 0;	
}
