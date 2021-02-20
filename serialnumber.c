#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Asks the user for a positive number with 11 digits.
    long number;
    do
    {
        number = get_long("Serial Number:");
    }
    while (number < 10000000000 || number > 99999999999);
    
    
    // Splits the number into digits and stores them into an array.
    int numberarray[11];
    for (int i = 11; i > 0; i--)
    {
        numberarray[i - 1] = number % 10;
        number /= 10;
    }
    
    // adds the first 10 digits after multiplying the plural digits with 2, singular digits with 3.
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
        {
            sum += numberarray[i] * 2;
            continue;
        }
        sum += numberarray[i] * 3;
    }
    
    // Checks if the last digit of sum is equal to the last digit of the number or not.
    if (sum % 10 == numberarray[10])
    {
        printf("Serial Number is valid.\n");
    }
    else
    {
        printf("Serial Number is not valid.\n");
    }
}
