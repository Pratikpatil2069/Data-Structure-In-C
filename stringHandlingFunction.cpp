#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	printf("enter the srting 1 and 2:\n");
	scanf("%s%s",&str1,&str2);
	printf("length of %s is %d\n",str1,strlen(str1));
	printf("length of %s is%d\n",str2,strlen(str2));
	printf("revers of str1 is%s\n",str1,strrev(str1));
	printf("revers of str2 is%s\n",str2,strrev(str2));
	strcat(str1,str2);
	printf("concatination of str1 and str2 is %s\n",str1,str2,strcat(str1,str2));
	printf("str1 copy in str2%s\n",str2,str1,strcpy(str1,str2));
	printf(" string compair for str1,str2 returned %d",strcmp(str2,str1));
	return 0;
}
