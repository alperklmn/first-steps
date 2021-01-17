#include <stdio.h>
#include <cs50.h>

float avg(int length, int Array[]);

int main(void)
{
    int total = get_int("Total number of scores: ");
    
    int scores[total];
    for (int i = 0; i < total; i++)
    {
        scores[i] = get_int("Score%i: ", i+1);
    }

    printf("Average: %f\n", avg(total, scores));
}

float avg(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}