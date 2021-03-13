// libraries
#include <stdio.h>

// prototypes
int binarysearch(int arr[], int firstindex, int lastindex, int number);

int main(void)
{
    // sorted array to search for our number
    int arr[] = {1, 2, 5, 8, 11, 19, 22, 37, 41, 87, 124, 251, 386, 534, 789};
    int len = sizeof(arr)/sizeof(arr[0]);

    
    // gets input of the number the user are searching
    int number;
    printf("Which number are you searching for?\n");
    scanf("%d", &number);
    
    // does binary search and returns the index of the number. if the number is not present in the array, returns -1
    int numberindex = binarysearch(arr, 0, len - 1, number);
    
    // checks the return value of binary search. prints the index if the number is present.
    if (numberindex != -1)
    {
        printf("The number is located in the index number %i\n", numberindex);
    }
    else
    {
        printf("The number is not present in the array.\n");
    }
}

// the binary search function. uses recursion.
int binarysearch(int arr[], int first, int last, int number)
{
    if (last >= first)
    {
        int mid = first + (last - first) / 2;
        
        if (number < arr[mid])
        {
            return binarysearch(arr, first, mid - 1, number);
        }
        else if (number > arr[mid])
        {
            return binarysearch(arr, mid + 1, last, number);
        }
        else
        {
            return mid;
        }
    }
    else
    {
        return -1;
    }
}
