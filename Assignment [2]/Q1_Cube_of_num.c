#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int x = 0;
    printf("Enter Number: \n");

    int check = scanf("%d", &x);

    if (0 == check)
    {
        printf("Please Enter Integer Number \n");
    }

    printf("Cube of number =  %d", cube(x));
    return 0;
}