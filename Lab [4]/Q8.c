#include <stdio.h>

int main()
{
    char str1[] = "Hello There";
    char str2[40] = {0};

    int i = 0;
    while ('\0' != str1[i])
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("str1 = %s \n", str1);
    printf("str2 = %s \n", str2);

    return 0;
}