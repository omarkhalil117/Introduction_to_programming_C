#include <stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int arr1[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[ROW][COL] = {{3, 5, 7}, {11, 13, 15}, {17, 19, 21}};
    int sumArr[ROW][COL] = {0};
    int i = 0, j = 0;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            sumArr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d \t", sumArr[i][j]);
        }
        printf("\n");
    }
}