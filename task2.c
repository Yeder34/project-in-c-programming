#include<stdio.h>
main()
{
	float cel=0.0;
	float far=0.0;
	printf("Enter the temperature in celcius :");
	scanf("%f",&cel);
	far=(cel*9/5)+32;
	printf("The temperature in farenhit: %f",far);
	return 0;
}
