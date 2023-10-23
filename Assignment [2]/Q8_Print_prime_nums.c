#include <stdio.h>

int findPrime(int f, int l)
{
    int i = 0;
    for (int i = f; i <= l; i++)
    {
        int flag = 1, j = 2;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }

        if (1 == flag)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    findPrime(1, 100);
    return 0;
}