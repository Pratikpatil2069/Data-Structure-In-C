 #include<stdio.h>
 int main()
 {
 	int a[50][50],i,j,n;
 	int sum[50][50];
 	int b[50][50];
 	printf("enter the array size:\n");
 	scanf("%d",&n);
 	printf("enter the array elements:\n");
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			scanf("%d",&a[i][j]);
		 }
	 }
	 printf("\matrics 1:\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d ",a[i][j]);
		 }
		 printf("\n");
	 	
	 }
	 printf("\n enter the array element of 2nd matrics:\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		scanf("%d",&b[i][j]);
		 }
	 }
	 printf("\nmatrics 2\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d ",b[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		sum[i][j]=a[i][j]+b[i][j];
		 }
	 }
	 printf("\naddition of matrics 1 and 2\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d ",sum[i][j]);
		 }
		 printf("\n");
	 }
	 
 	return 0;
 }
