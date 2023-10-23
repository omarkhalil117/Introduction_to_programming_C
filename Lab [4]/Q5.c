#include <stdio.h>

int main()
{
    char st1[50], st2[50];
    int lenght = 0, j = 0;

    printf("Enter firstname : \n");
    scanf("%s", &st1);
    printf("Enter lastname : \n");
    scanf("%s", &st2);

    while (st1[lenght] != '\0')
    {
        lenght++;
    }

    while (st2[j] != '\0')
    {
        st1[lenght] = st2[j];

        j++;
        lenght++;
    }

    st1[lenght] = '\0';

    printf("%s", st1);

    return 0;
}