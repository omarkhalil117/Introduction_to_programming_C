#include <stdio.h>

int main()
{
    char c = 'a';

    printf("Enter Charachter : \n");
    scanf("%c", &c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("This is Charachter \n");
    }

    else
    {
        printf("This is not charachter \n");
    }

    return 0;
}