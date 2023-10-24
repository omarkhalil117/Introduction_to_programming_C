#include <stdio.h>
#include <stdlib.h>

void swap(int *x , int *y);


int main()
{
    int x = 5 , y = 6 ;

    // Swap function

    printf("Before : %d %d \n" , x , y);
    swap(&x , &y);
    printf("After : %d %d \n" , x , y);


    // no temp
    // add & subtract
    x = x + y; // x now becomes 15
    y = x - y; // y becomes 10
    x = x - y; // x becomes 5

    printf("After Swapping: x = %d, y = %d \n", x, y);


    // Division
    if (y == 0) {
        y = x;
        x = 0;
    }
    else if (x == 0) {
        x = y;
        y = 0;
    }
    else {
        x = x * y;
        y = x / y;
        x = x / y;
    }

    printf("After Swap x = %d  y = %d \n", x , y);

    return 0;
}

void swap(int *x , int *y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp ;

}
