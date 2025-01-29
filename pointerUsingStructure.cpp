#include<stdio.h>
struct student
{
	int rollnum;
	char name[20];
	float marks;
};
struct student s;
int main()
{
	struct student *ptr=&s;
	printf("enter the rollnum of student:\n");
	scanf("%d",&(*ptr).rollnum);
	printf("enter the name of student:\n");
	scanf("%s",&(*ptr).name);
	printf("enter the marks of student:\n");
	scanf("%f",&(*ptr).marks);
	printf("rollnum=%d\n",ptr->rollnum);
	printf("name=%s\n",ptr->name);
	printf("marks=%f",ptr->marks);
	return 0;
}
