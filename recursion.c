#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(void)
{
    int number;
    do
    {
    number = get_int("Positive Number:");
    }
    while (number < 1);
    
    int step = collatz(number);
    printf("\nIt took %i steps to reach to 1.\n", step);
}

int collatz(int n)
{
    printf("%i ", n);
    
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0)
    {
        return 1 + collatz(n/2);
    }
    else
    {
        return 1 + collatz(3*n + 1);
    }
}
