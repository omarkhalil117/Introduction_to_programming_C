#include <stdio.h>
int HeatTime(int temp)
{
    if (temp > 100 || temp < 0 || 0 == temp)
    {
        return 0;
    }
    else if (temp > 0 && temp < 30)
    {
        return 7;
    }
    else if (temp >= 30 && temp < 60)
    {
        return 5;
    }
    else if (temp >= 60 && temp < 90)
    {
        return 3;
    }
    else if (temp >= 90)
    {
        return 1;
    }
}
int main()
{
    int temp = 0;
    printf("Enter Temperature : \n");
    int check = scanf("%d", &temp);

    if (0 == check)
    {
        printf("Erro : Invalid Input Please Enter Number. \n ");
    }
    else
    {
        int res = HeatTime(temp);
        printf("Res = %d", res);
    }

    return 0;
}