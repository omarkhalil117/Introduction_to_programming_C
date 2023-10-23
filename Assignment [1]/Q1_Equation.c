#include <stdio.h>

int main()
{
    int a = 0, b = 0, check = 0;

    printf("Enter Two numbers : \n");

    check = scanf("%d %d", &a, &b);

    if (0 == check)
    {
        printf("Erorr : Invalid Input. \n");
    }
    else
    {
        printf("%d \n", ((a + b) * 3) - 10);
    }
    return 0;
}