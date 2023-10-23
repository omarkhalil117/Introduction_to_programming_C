#include <stdio.h>

int main()
{

    int num = 0, pow = 0, n = 0, res = 1;
    int check1 = 0, check2 = 0;
    printf("Enter number : \n");
    check1 = scanf("%d", &num);
    printf("Enter power : \n");
    check2 = scanf("%d", &pow);

    if (0 == check1 || 0 == check2 || num < 0 || pow < 0)
    {
        printf("Enter Valid number");
        return 0;
    }
    for (n = 1; n <= pow; n++)
    {
        res *= num;
    }

    printf("Resul = %d", res);
    return 0;
}
