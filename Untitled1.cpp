#include<stdio.h>
int lengthOfstring(char *exp)
{
	static int c=0;
	if(*exp==NULL)
	{
	   return 0;	
	}
	c++;
    lengthOfstring(++exp);
    return c;
}
int main()
{
	char exp[20];
    int len;
    printf("enter the string:\n");
    gets(exp);
    len=lengthOfstring(exp);
    printf("length=%d",len);
    return 0;
}
