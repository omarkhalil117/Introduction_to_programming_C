#include <stdio.h>

int main()
{
    char c;

    printf("Enter character: \n");
    c = getch();

    if (-32 == c)
    {

        printf("Extended Key");
        printf("%d", getch());
    }
    else
    {
        printf("Char %c \n", c);
    }

    return (0);
}