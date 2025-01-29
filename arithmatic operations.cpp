#include<stdio.h>
int main ()
{
	int a,b;
	char op;
	printf("enter the number 1:\n");
	scanf("%d",&a);
	printf("enter the operation +-*/:\n");
	scanf("%s",&op);
	printf("enter the number 2:\n");
	scanf("%d",&b);
	switch(op)
	{
	
		case '+':printf("addition=%d",a+b);
		break;
		case '-':printf("substaction=%d",a-b);
		break;
		case'*':printf("multiplication=%d",a*b);
		break;
		case'/':printf("division=%d",a/b);
		break;
		case'%':printf("mod=%d",a%b);
		break;
		default:
			printf("ERROR!!!!");
	}
return 0;
}
