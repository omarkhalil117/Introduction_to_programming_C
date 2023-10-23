#include <stdio.h>

int main()
{
    // Question [2]
    int x = 5;
    int a = 60;
    float y = 5.5;
    char c = 'a';
    double z = 20.5;
    printf("Q2: %d %f %c %.1f \n", x, y, c, z);

    // Question [3]
    char ch = 'a';
    printf("Q3: %d \n", ch);

    // Question [4]
    printf("Q4: sum =  %d \n", x + a);

    // Question [5]
    printf("Q5: Hex of number 5 = %x \n", a);

    // Question [6]
    int sum = x + a;
    int sub = a - x;
    float div = (float)a / x;
    float mul = a * x;
    printf("Q6: sum= %d  sub= %d  div= %f mul= %f", sum, sub, div, mul);

    // Question [7]
    int e = 7;
    int f = 2;
    float res1 = e / f;
    float res2 = e % f;
    printf("Q7: remainder = %f  quotient \n", res1, res2);

    // Question [8]
    int b = 10;
    int n = 20;
    int d = 30;

    if (b > n && b > d)
    {
        printf("Q8: The biggest number is b = %d", b);
    }
    else if (n > b && n > d)
    {
        printf("Q8: The biggest number is n = %d", n);
    }
    else
    {
        printf("Q8: The biggest number is d = %d", d);
    }

    return 0;
}