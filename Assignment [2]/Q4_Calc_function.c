#include <stdio.h>
int clac(int a, int b, char c)
{
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
            printf("Error cant divide by zero");
        }
        else
        {
            printf("%.1f", (float)a / b);
        }
        break;
    default:
        printf("Error: Wrong operator \n");
        break;
    }
}

int main()
{
    int x, y;
    char ch;
    printf("Enter x : \n");
    int c1 = scanf("%d", &x);
    printf("Enter y: \n");
    int c2 = scanf(" %d", &y);

    if (c1 == 0 || c2 == 0)
    {
        printf("Worng values please enter integer values \n");
        return 0;
    }
    printf("Enter Operator:");
    scanf(" %c", &ch);

    clac(x, y, ch);

    return 0;
}