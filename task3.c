#include<stdio.h>
main()
{
	int s1=0;
	int s2=0; 
	int s3=0;
	int sum=0;
	float avg=0.0;
	
	printf("Enter the marks of first subject :");
	scanf("%d",&s1);
	printf("\nEnter the marks of second subject :");
	scanf("%d",&s2);
		printf("\nEnter the marks of third subject :");
		scanf("%d",&s3);
		sum=s1+s2+s3;
		avg=sum/3;
		printf("\nThe average marks of three subjects: %f",avg);
		
		
	
}

