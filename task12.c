#include<stdio.h>
main()
{
	int far=0;
	int cel=0;
	char choice;
	printf("Choose one option :\n.1celcuis to farenhit\n.2farenhit to celcuis\n.3end");
	scanf("%s",&choice);
	switch(choice)
	{
		case'1':
		printf("Enter the temperature in celcuis:");
		scanf("%d",&cel);
		far=(cel*9/5)+32;
		printf("The temperature in farenhit is: %d",far);
		break;
		case'2':
			printf("Enter the temperature in farenhit:");
			scanf("%d",&far);
			cel=5*(far-32)/9;
			printf("The temperature in celcuis is :%d",cel);
			break;
		case'3':
			printf("end");
			break;
		case'4':
			printf("Please enter a valid choice");
			break;
				
	}
}
