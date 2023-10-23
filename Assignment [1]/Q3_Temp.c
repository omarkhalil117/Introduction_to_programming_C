#include <stdio.h>

int main()
{
    int temp = 0, check = 0;
    float res = 0;
    printf("Enter Degree in Cel : \n");
    check = scanf("%d", &temp);

    if (0 == check)
    {
        printf("Erorr : Wrong Input. \n");
    }
    else
    {
        res = ((float)temp * 9 / 5) + 2;
        printf("Temp in Fahrenheit %.2f \n", res);
    }

    return 0;
}
