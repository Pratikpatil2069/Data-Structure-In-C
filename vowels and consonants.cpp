#include<stdio.h>
int main()
{
	char op;
	printf("Enter the alphabets:\n");
	scanf("%s",&op);
	switch(op)
	{
		
		case'a':
			printf("entered alphabets is vowel\n");
		break;	
		case'e':
			printf("entered alphabets is vowel\n");
		break;	
		case'i':
			printf("entered alphabets is vowel\n");
		break;	
		case'o':
			printf("entered alphabets is vowel\n");
		break;	
		case'u':
			printf("entered alphabets is vowel\n");
		break;
		default:
		    printf("entered alphabets is consonats");	
	}
	return 0;
}
