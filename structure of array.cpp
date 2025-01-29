#include<stdio.h>
struct student
{
	int rollnum;
	float marks;
	char name[20];
};
int main()
{
	int i;
	struct student s[3];
	for(i=0;i<3;i++)
	{
		printf("enter the detail of student %d\n",i+1);
		printf("enter the rollnum,marks and name\n");
		scanf("%d%f%s",&s[i].rollnum,&s[i].marks,s[i].name);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		printf("roll number of %d person is %d\n",i+1,s[i].rollnum);
		printf("marks of %d person is %f\n",i+1,s[i].marks);
		printf("name of %d studenr is %s\n",i+1,s[i].name);
		printf("\n");	
	}
	return 0;
}
