#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 // Define array size

int main()
{
    // Question [2]

    // Initialize counter & arr to 0
    int i = 0, arr1[5] = {0};

    // Read Data from user
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter Number %d in Array : \n", i + 1);
        scanf(" %d", &arr1[i]);
    }

    // Print Data From User
    for (i = 0; i < SIZE; i++)
    {

        printf("%d  \n", arr1[i]);
    }

    // Question [3]

    // Initialization of variables
    int j = 0, arr2[5] = {6, 11, 4, 9, 5}, min = 100000, max = 0;

    for (j = 0; j < 5; j++)
    {
        // Check if number is bigger than max
        if (arr2[j] > max)
        {
            max = arr2[j];
        }

        // Check if number is smaller than min
        if (arr2[j] < min)
        {
            min = arr2[j];
        }
    }

    printf("Max = %d  and Min = %d", max, min);

    return 0;
}