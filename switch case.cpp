#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the operation +-/*%:\n");
	scanf("%s",&op);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	switch(op)
	{
	case'+':
		printf("addition=%d",a+b);
		break;
	case'-':
	     printf("substaction=%d",a-b);
		 break;
	case'*':
	    printf("multiplication=%d",a*b);
		break;
	case'/':
	    printf("division=%d",a/b);
		break;
	case'%':
	    printf("mod=%d",a%b);
		break;
	default:
	    printf("wrong input");				 	
    }
	return 0;
}
