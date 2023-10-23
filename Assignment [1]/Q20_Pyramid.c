#include <stdio.h>

int main()
{

    int i, j, sp;

    for (i = 1; i <= 5; i++)
    {

        for (sp = 1; sp <= 5 - i; sp++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}