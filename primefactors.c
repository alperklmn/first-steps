#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int number = get_int("number:");
    
    printf("the prime factors are: ");
    
    //write 2 if the number is divisible 2. The reason of putting 2 out of the loop is to 
    //be more efficient by adding 2 instead of 1 to the "i" since every prime number is a singular number except "2". 
    if (number % 2 == 0)
    {
        printf("2 ");
    }
    
    //this loop finds the prime factors of the number.
    int i;
    for (i = 3; i <= number; i += 2)
    {
        if (number % i == 0)
        {
            //check if "i" is prime
            int divided = 0;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    divided = 1;
                    break;
                }
            }
            if (divided == 0)
            {
                printf("%i ", i);
            }
        }
        
    }
    printf("\n");
}
