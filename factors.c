#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int number = get_int("number:");
    
    printf("the positive factors are: ");
    
    int i;
    for (i = 1; i <= number; i ++)
    {
        if (number % i == 0)
        {
                printf("%i ", i);
        }
        
    }
    printf("\n");
}
