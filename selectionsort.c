#include <stdio.h>

void swap(int *xp, int *yp);
void selectionsort(int arr[], int len);
void printArray(int arr[], int len);

int main(void)
{
    int arr[] = {7, 8, 11, 2, 87, 2759, 1, 824, 56, 98, 324, 11842, 2561, 5595, 88, 22, 5};
    int len = sizeof(arr) / sizeof (arr[0]);
    
    selectionsort(arr, len);
    printf("Sorted array: \n"); 
    printArray(arr, n); 
}

void selectionsort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(&arr[i], &arr[minindex]);
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
} 
