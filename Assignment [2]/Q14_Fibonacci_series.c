#include <stdio.h>

int pre1 = 1, pre2 = 0;
// 0,1,1,2,3,5,8

void fibonacci(int x)
{
    if (x < 3)
    {
        return;
    }
    int temp = pre1 + pre2;
    pre1 = pre2;
    pre2 = temp;

    printf("%d ", temp);
    return fibonacci(x - 1);
}

void printFibo(int x)
{
    if (1 == x)
    {
        printf("%d", 0);
    }
    else if (2 == x)
    {
        printf("%d %d", 0, 1);
    }
    else
    {
        printf("%d %d ", 0, 1);
        fibonacci(x);
    }
}

int main()
{
    int n = 0, check = 0;

    printf("Enter Number of fibonacci steps : \n");
    check = scanf("%d", &n);

    if (0 == check)
    {
        printf("Error : Invalid Input. \n");
    }
    else
    {
        printFibo(n);
    }
    return 0;
}