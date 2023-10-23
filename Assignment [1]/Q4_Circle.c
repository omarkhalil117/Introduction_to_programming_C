#include <stdio.h>

int main()
{

    int radius = 0, check = 0;
    printf("Enter radius : \n");
    check = scanf("%d", &radius);

    if (0 == check)
    {
        printf("Erorr : Wrong Input. \n");
    }
    else
    {
        printf("Area of the circle = %d  and circumference = %f \n", radius * radius, 2 * 3.14 * (float)radius);
    }

    return 0;
}
