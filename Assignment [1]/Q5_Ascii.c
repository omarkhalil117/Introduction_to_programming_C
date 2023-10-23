#include <stdio.h>

int main()
{
    int check = 0;
    char cr = 'a';
    printf("Enter char : \n");
    check = scanf(" %c", &cr);

    if (0 == check)
    {
        printf("Erorr : Wrong Input. \n");
    }
    else
    {
        printf("Ascii code of char %c  is %d \n", cr, cr);
    }

    return 0;
}