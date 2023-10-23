#include <stdio.h>

int main()
{

    int l = 0, num = 0, fac = 1;
    printf("Enter Positive integer number \n");
    int c1 = scanf("%d", &num);
    if (c1 == 0 || num < 0)
    {
        printf("Please enter valid number \n");
        return 0;
    }

    for (l = 1; l <= num; l++)
    {
        fac *= l;
    }
    printf("Factorial [ %d ]  = %d \n", num, fac);

    return 0;
}