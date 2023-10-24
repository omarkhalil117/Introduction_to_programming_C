#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

    char c, arr[100] = {0} ;
    int size = 0 ;
    int flag = 0;
    printf("\n\t  Enter the text (Enter '.' and (Enter key) to print it) \n\t");
    while(1 && flag!=1)
    {
        c = getchar();
        arr[size] = c ;
        size++;
        if(c == '.')
        {
            flag=1;
        }
    }
    printf("\n\t %s", arr);
    printf("\n\t size = %d", size);
    return 0;
}


