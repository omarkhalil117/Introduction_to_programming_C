#include <stdio.h>

int main()
{
    float num = 0;
    int check = 0, counter = 0;
    printf("Enter decimal number \n");
    check = scanf("%f", &num);

    if (0 == check)
    {
        printf("Error : invalid input");
        return 0;
    }

    while (0 != num)
    {
        num *= 10;
        num = num - (int)num;
        counter++;
    }

    printf("Count = %d \n", counter);

    return 0;
}