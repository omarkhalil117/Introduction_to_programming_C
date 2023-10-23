#include <stdio.h>

char toUpperCase(char c)
{
    return c - 32;
}

int main()
{
    char ch = 'a';
    printf("Enter char \n");

    scanf("%c", &ch);

    char res = toUpperCase(ch);
    printf("char to upper : %c", res);
    return 0;
}