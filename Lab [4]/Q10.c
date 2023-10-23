#include <stdio.h>

int main()
{
    char orig_str[70];
    char filtered[40];
    int i = 0, j = 0;
    printf("Enter String : \n");
    scanf("%s", &orig_str);

    while ('\0' != orig_str[i])
    {
        if ((orig_str[i] >= 97 && orig_str[i] <= 122) || (orig_str[i] >= 65 && orig_str[i] <= 90))
        {
            filtered[j] = orig_str[i];
            j++;
        }
        i++;
    }

    printf("Filtered string = %s \n", filtered);

    return 0;
}