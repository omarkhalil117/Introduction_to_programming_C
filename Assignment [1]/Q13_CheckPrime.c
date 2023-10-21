
#include <stdio.h>

int main()
{

    int no = 0, m = 0, flag = 1;

    printf("Enter Positive integer number \n");
    int c2 = scanf(" %d", &no);
    if (0 == c2 || no < 0)
    {
        printf("Please enter valid number");
    }

    for (m = 2; m * m <= no; m++)
    {
        if (no % m == 0)
        {
            flag = 0;
        }
    }

    if (1 == flag)
    {
        printf("Number %d is Prime \n", no);
    }
    else
    {
        printf("Number %d is Not Prime \n", no);
    }
    return 0;
}