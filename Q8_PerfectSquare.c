
#include <stdio.h>

int main()
{
    int no = 0;
    int coun = 0;
    printf("Please enter Positive number : \n");
    int check = scanf("%d", &no);
    if (0 == check)
    {
        printf("Pleasee enter positive integer number \n");
    }
    else if (no < 0)
    {
        printf("False \n");
    }
    else if (0 == no)
    {
        printf("True \n");
    }
    else
    {

        for (coun = 1; coun * coun <= no; coun++)
        {
            if (coun * coun == no)
                printf("Ture \n");
        }
        printf("False \n");
    }

    return 0;
}
