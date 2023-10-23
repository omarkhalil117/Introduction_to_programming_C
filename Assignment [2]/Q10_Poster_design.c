#include <stdio.h>
int HolesNum(int numb)
{
    int rem = 0, res = 0;

    while (0 != numb)
    {
        rem = numb % 10;

        if (8 == rem)
        {
            res += 2;
        }

        else if (9 == rem || 6 == rem || 4 == rem || 0 == rem)
        {
            res += 1;
        }
        numb /= 10;
    }

    printf(" Number of holes = %d", res);
}
int main()
{
    HolesNum(889);
    return 0;
}