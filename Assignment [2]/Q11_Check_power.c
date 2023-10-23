#include <stdio.h>

int isPowerOf2(int num)
{
    if (0 == num)
    {
        return 0;
    }
    while (1 != num)
    {
        if (0 != num % 2)
        {
            return 0;
        }
        num /= 2;
    }

    return 1;
}

int main()
{
    int n = 0, flag = 0, check = 0, res = 0;

    printf("Enter number : \n");
    check = scanf("%d", &n);

    if (!check)
    {
        printf("Please enter a number");
    }

    res = isPowerOf2(n);

    if (1 == res)
    {
        printf("Number is power of 2");
    }
    else
    {
        printf("Number is not power of 2");
    }

    return 0;
}