#include <stdio.h>

int main()
{
    int a, b;
    char c;
    printf("Enter A :");
    int f1 = scanf("%d", &a);
    printf("Enter B:");
    int f2 = scanf(" %d", &b);

    printf("Enter Operator: \n");
    int f3 = scanf(" %c", &c);

    if (0 == f1 || 0 == f2 || 0 == f3)
    {
        printf("Please Enter valid Data \n");
    }

    switch (c)
    {
    case ('+'):
        printf("%d", a + b);
        break;

    case ('-'):
        printf("%d", a - b);
        break;

    case ('*'):
        printf("%d", a * b);
        break;

    case ('/'):
        if (0 == b)
        {
            printf("Error");
        }
        printf("%.1f", (float)a / b);
        break;
    default:
        printf("Wrong operator");
        break;
    }
    return 0;
}
