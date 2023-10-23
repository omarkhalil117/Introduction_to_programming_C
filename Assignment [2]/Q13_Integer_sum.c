#include <stdio.h>
int FloorSum(float n1, float n2)
{
    return (int)(n1 + n2);
}
int main()
{
    float num1 = 0, num2 = 0;
    int check1 = 0, check2 = 0;

    printf("Enter First Number : \n");
    check1 = scanf("%f", &num1);

    printf("Enter Second Number : \n");
    check2 = scanf("%f", &num2);

    if (0 == check1 || 0 == check2)
    {
        printf("Error Invalid Input \n");
    }
    else
    {
        int res = FloorSum(num1, num2);
        printf("%d", res);
    }

    return 0;
}