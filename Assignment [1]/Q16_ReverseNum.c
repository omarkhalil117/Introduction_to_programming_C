#include <stdio.h>

int main()
{
    int numb = 0, rem = 0, reversed_numb = 0;
    printf("Enter a number: ");
    scanf("%d", &numb);

    while (0 != numb)
    {
        rem = numb % 10;
        reversed_numb = reversed_numb * 10 + rem;
        numb /= 10;
    }
    printf("Reversed num = %d", reversed_numb);

    return 0;
}