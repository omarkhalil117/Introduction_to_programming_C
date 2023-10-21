
#include <stdio.h>

int main()
{
    int i = 0, arr1[3] = {0}, min = 1000000;
    for (i = 0; i < 3; i++)
    {
        printf("Enter number %d \n", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 3; i++)
    {
        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }
    printf("Minimum number is %d \n", min);

    return 0;
}
