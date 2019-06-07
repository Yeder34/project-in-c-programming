#include<stdio.h>
main()
{
	char str1[10];
	char str2[10];
	printf("Enter your first name:");
	scanf("%s",&str1);
	printf("Enter your last name :");
	scanf("%s",&str2);
	strcat(str1,str2);
	printf("Your full name: %s",str1);
}
