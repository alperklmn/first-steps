#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("Number of elements:");
    
    int n1 = 0;
    int n2 = 1;
    int n3;
    
    printf("%i %i ", n1, n2);
    
    int i;
    for(i=1; i<number; i++)
    {
        n3 = n2 + n1;
        printf("%i ", n3);

        n1 = n2;
        n2 = n3;
    }
    printf("\n");
}
