#include <stdio.h>

int main()
{

    int num = 0, pow = 0, n = 0, res = 1;
    printf("Enter number : \n");
    scanf("%d", &num);
    printf("Enter power : \n");
    scanf("%d", &pow);

    for (n = 1; n <= pow; n++)
    {
        res *= num;
    }

    printf("Resul = %d", res);
    return 0;
}
