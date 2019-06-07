
#include <stdio.h>
 
 main()
{
    int num,  remainder, reverse = 0;
 
    printf("Enter an integer \n");
    scanf("%d", &num);
    /*  original number is stored at temp */
    
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    
    printf("Its reverse is  = %d\n", reverse);

}
