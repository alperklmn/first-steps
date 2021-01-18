#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    
    //forces user to give a float number bigger than 0
    float dollar;
    do
    {
        dollar = get_float("Change Owed: ");
    }
    while (dollar < 0);
    
    int cents = round(dollar * 100);
    int coins = 0;
    
    int cointype[] = {25, 10, 5, 1};
    
    //we can calculate how many elements in an array like this. sizeof operator tells how much bytes does something use.
    int length = sizeof(cointype) / sizeof(int);
    
    for (int i = 0; i < length; i++)
    {
        coins += cents / cointype[i];
        cents %= cointype[i];
    }
    
    printf("%i\n", coins);

}
