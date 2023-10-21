#include <stdio.h>

int main()
{
    int sum = 0, k = 0;

    for (k = 1; k <= 100; k++)
    {
        sum += k;
    }

    printf("Sum = %d", sum);

    return 0;
}