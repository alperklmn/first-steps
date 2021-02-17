#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int number = get_int("number:");
    
    int divided = 0;
    for(int i = 2; i <= sqrt(number); i++)
    {
        if(number%i == 0)
        {
            divided = 1;
            break;
        }
    }
    
    if(divided == 0 && number > 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
}
