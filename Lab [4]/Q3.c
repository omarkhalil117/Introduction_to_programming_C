#include <stdio.h>

int main()
{
    char line[100];

    printf("Enter a string: ");
    scanf("%[^\n]", line);

    printf("You entered: %s\n", line);

    return 0;
}