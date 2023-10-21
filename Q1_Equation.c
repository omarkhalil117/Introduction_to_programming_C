#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    printf("Enter Two numbers : \n");
    scanf("%d %d", &a, &b);
    printf("%d \n", ((a + b) * 3) - 10);
    return 0;
}