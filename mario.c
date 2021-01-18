#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //forces user to give an integer between 1-8
    int h;
    do
    {
         h = get_int("Height: ");
    }
    while( h<1 || h>8 );
    
    int space = h-1;
    
    int i;
    for(i=1 ; i<=h ; i++)
    {
        //leaves space height-1 times.
        int t;
        for(t=0 ; t<space ; t++)
        {
            printf(" ");
        }
        
        //writes "#" as the number of the line.
        int j;
        for(j=0 ; j<i ; j++)
        {
            printf("#");
        }
        
        space--;
        printf("\n");
        
    }
}
