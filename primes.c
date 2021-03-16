#include <stdio.h>
#include <math.h>

int isprime(int number);

int main(void)
{
    int n;
    printf("This program gives prime numbers up to n.\n");
    printf("n: ");
    scanf("%i", &n);
    
    int primecount = 0;
    for (int i = 0; i <= n; i++)
    {
        if (isprime(i))
        {
            printf("%i ", i);
            primecount++;
        }
    }
    printf("\n");
    printf("There is %i prime number up to n.\n", primecount);
}

int isprime(int number)
{
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
        return 1;
    }
    else
    {
        return 0;
    }
}
