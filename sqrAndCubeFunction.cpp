#include<stdio.h>
void sqr()
{
	int n,squar;
	printf("enter the number:\n");
	scanf("%d",&n);
	squar=n*n;
	printf("sqr=%d",squar);
}
int cube(int a)
{
	int c;
	c=a*a*a;
	return c;
}
int main()
{
	sqr();
	int a,c;
	printf("\nenter the number:\n");
	scanf("%d",&a);
	c=cube(a);
	printf("cube=%d",c);
	
	return 0;
}
