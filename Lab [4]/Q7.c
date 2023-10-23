#include <stdio.h>

int main()
{

    char str[100];
    char c = 'l';
    int i = 0, counter = 0;

    printf("Enter a charachter: \n");
    scanf("%c", &c);

    printf("Enter a string: \n");
    scanf("%s", &str);

    while ('\0' != str[i])
    {
        if (str[i] == c)
        {
            counter++;
        }
        i++;
    }
    printf("Freq of %c = %d", c, counter);
    return 0;
}