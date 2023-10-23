#include <stdio.h>

int main()
{
    int x = 5, y = 10;
    if (x == y)
    {
        printf("Numbers are equal \n");
    }
    else
    {
        if (x > y)
        {
            printf("x is bigger than y \n");
        }
        else
        {
            printf("y is bigger than x \n");
        }
    }

    return 0;
}
