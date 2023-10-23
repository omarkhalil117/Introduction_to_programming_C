#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int arr[ROW][COL] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    int i = 0, j = 0, sum = 0;

    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            sum += arr[j][i];
            // printf("i= %d , j= %d Sum %d \n", i, j, sum);
        }
        printf("Avg of col %d  = %d \n", i, sum / COL);
        sum = 0;
    }
    return 0;
}