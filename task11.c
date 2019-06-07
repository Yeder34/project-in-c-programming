#include<stdio.h>
struct book
{
	char title[30];
	char author[30];
	char genre[30];
}a;
main()
{
	printf("Enter the title :");
	scanf("%s",a.title);
	printf("\nEnter the author name:");
	scanf("%s",a.author);
	printf("\n Enter the genre :");
	scanf("%s",a.genre);
	printf("The book details are :");
	printf("\nTitle: %s\n",a.title);
	printf("Author:%s\n",a.author);
	printf("Genre : %s\n",a.genre);
}
