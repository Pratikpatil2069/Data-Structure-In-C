#include<stdio.h>
#include<string.h>
int top=-1;
int size;
char stack[100];
char push(char);
char pop();
int main()
{
   char str[20],s;
   int length,i;	
   printf("enter the string:\n");
   gets(str);
   length=strlen(str);
   size=length;
   printf("string revers:\n");
   for(i=0;i<size;i++)
   {
   	s=str[i];
   	push(s);
   }
   pop();
   return 0;
}
char push(char s)
{
	top++;
   stack[top]=s;	
}
char pop()
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%c",stack[i]);
	}
}
