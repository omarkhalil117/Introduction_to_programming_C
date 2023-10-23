#include <stdio.h>

void checkNumber(int x)
{
    if (0 == x)
    {
        printf("The number is zero \n");
    }
    else if (x > 0)
    {
        printf("The number is positive \n");
    }
    else
    {
        printf("The number is negative \n");
    }
}

int main()
{
    int num = 0;
    printf("Enter number : \n");
    int check = scanf("%d", &num);

    if (0 == check)
    {
        printf("This is not a number \n");
        return 0;
    }

    checkNumber(num);

    return 0;
}