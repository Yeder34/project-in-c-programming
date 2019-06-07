#include<stdio.h>
main()
{
	char name[10];
	int age=0;
 long long int phone;
	
	
	printf("Enter the name:");
	gets(name);
	printf("\nEnter the age :");
	scanf("%d",&age);
	printf("\nEnter the phone number :");
	
	{
		scanf("\n%lld",&phone);
		
	}
	printf(" name:%s\nage:%d\nphone number:%lld\n",name,age,phone);
	return 0;
}
