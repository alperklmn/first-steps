#include <stdio.h>

void bubblesort(int arr[], int len);
void swap(int *xp, int *yp);

int main(void)
{
    // the unsorted/sorted array
    int arr[] = {2, 8, 327, 112, 56, 41, 88, 0, 37, 174, 221, 297, 300, 357};
    // calculates the number of the elements in the array
    int len = sizeof(arr) / sizeof(arr[0]);

    // sorts and prints the array
    bubblesort(arr, len);
    printf("Sorted array: \n");
    for (int i = 0; i < len; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

// the bubble sort function.
void bubblesort(int arr[], int len)
{
    for (int i = 0; i < len/2 + 1; i++)
    {
        int swapcount = 0;

        // last i elements are already in place
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapcount++;
            }
        }

        // if no swap has occured, list is sorted.
        if (swapcount == 0)
        {
            return;
        }
    }
}

// swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
