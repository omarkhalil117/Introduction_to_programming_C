#include <stdio.h>

int main()
{
    char low_case[50] = {0};
    char up_case[50] = {0};
    int i = 0;

    printf("Enter lower case string : \n");
    scanf("%s", &low_case);

    while ('\0' != low_case[i])
    {
        if (low_case[i] >= 97 && low_case[i] <= 122)
        {
            low_case[i] -= 32;
            up_case[i] = low_case[i];
        }
        up_case[i] = low_case[i];
        i++;
    }
    printf("Upper case string : %s \n", up_case);

    return 0;
}