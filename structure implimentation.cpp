#include<stdio.h>
struct student{
	int marks;
	float per;
	char div;
}shreyash;
int main()
{
	struct student pratik;
	
	printf("enter the marks of pratik:\n");
	scanf("%d",&pratik.marks);
	printf("enter the percentage of pratik:\n");
	scanf("%f",&pratik.per);
	printf("enter the division of pratik:\n");
	scanf("%s",&pratik.div);
	printf("the mark of pratik is %d\n",pratik.marks);
	printf("the percentage of pratik is %f\n",pratik.per);
	printf("the division of pratik is %c\n",pratik.div);
	printf("enter the marks of shreyash:\n");
	scanf("%d",&shreyash.marks);
	printf("enter the percentage of shreyash:\n");
	scanf("%f",&shreyash.per);
	printf("enter the division of shreyash:\n");
	scanf("%s",&shreyash.div);
	printf("the mark of shreyash is %d\n",shreyash.marks);
	printf("the percentage of shreyash is %f\n",shreyash.per);
	printf("the division of shreyash is %c\n",shreyash.div);
	return 0;
	
}
