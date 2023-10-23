#include <stdio.h>

int main()
{
    char str[] = "HellooooThere";
    int i = 0;

    while ('\0' != str[i])
    {
        i++;
    }

    printf("length of string = %d \n", i);
    return 0;
}