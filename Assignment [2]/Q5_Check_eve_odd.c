#include <stdio.h>

int check_even_odd(int n)
{
    if (n == 0)
    {
        printf("The number is zero \n");
    }
    else if (0 == n % 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num = 0, res;

    printf("Please Enter number : \n");
    int check = scanf("%d", &num);

    if (0 == check)
    {
        printf("Error : Enter integer number \n");
        return 0;
    }
    else
    {
        res = check_even_odd(num);
        if (0 == res)
        {
            printf("Number %d  is even (%d)", num, res);
        }
        else
        {
            printf("Number %d  is odd (%d)", num, res);
        }
    }

    return 0;
}