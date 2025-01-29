#include<stdio.h>
 int powerOfnum(int base,int pow)
{
	if(pow==0)
	{
		return 1;
	}
	return base*powerOfnum(base,pow-1);
}
int main()
{
	int base,pow,power;
	printf("enter the base:\n");
	scanf("%d",&base);
	printf("enter the power:\n");
	scanf("%d",&pow);
	power=powerOfnum(base,pow);
	printf("power=%d",power);
	return 0;
}
