#include <stdio.h>

void CheckMul(int a, int b)
{
    if (0 == a % b)
    {
        printf("First number is multiple of second number \n");
    }
    else
    {
        printf("First number is not multiple of second number \n");
    }
}
int main()
{
    int x = 0, y = 0;
    printf("Enter Number 1 : \n");
    scanf("%d", &x);

    printf("Enter Number 2 : \n");
    scanf("%d", &y);

    CheckMul(x, y);

    return 0;
}