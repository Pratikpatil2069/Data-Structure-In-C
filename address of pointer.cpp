#include<stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	char x;
	char *r;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	printf("enter the string character:\n");
	scanf("%s",&x);
	p=&a;
	q=&b;
	r=&x;
	printf("the address of %d is %d",a,p);
	printf("the address of %d is %d ",b,q);
	printf("the address of %c is %d",x,r);
	return 0;
}
