// includes
#include <stdio.h>
#include <cs50.h>

// function declarations
bool valid_triangle(float x, float y, float z);

int main(void)
{
    float x = get_int("First side of the triangle:");
    float y = get_int("Second side of the triangle:");
    float z = get_int("Third side of the triangle:");
    
    if (valid_triangle(x, y, z) == false)
    {
        printf("That is not a valid triangle.\n");
    }
    else
    {
        printf("That is a valid triangle.\n");
    }

}

// function definitions
bool valid_triangle(float x, float y, float z)
{
    if(x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
    
    if(x + y <= z || x + z <= y || y + z <= x)
    {
        return false;
    }
    
    return true;
}
