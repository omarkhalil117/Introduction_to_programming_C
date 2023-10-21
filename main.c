#include <stdio.h>

int main()
{
    /*
    // Question [1]
    int a = 0, b = 0;
    printf("Enter Two numbers : \n");
    scanf("%d %d", &a, &b);
    printf("%d \n", ((a + b) * 3) - 10);

    // Question [2]
    char name[] = "Omar";
    int grade = 10;

    printf("My name is %s  and i'm in grade %d \n", name, grade);

    // Question [3]
    int temp = 40;
    printf("Temp in Fahrenheit %f \n", (float)temp * (5 / 9) + 2);

    // Question [4]
    int radius = 10;
    printf("Area of the circle = %d  and circumference = %f \n", radius * radius, 2 * 3.14 * (float)radius);

    // Question [5]
    char cr = 'a';
    printf("Enter char : \n");
    scanf(" %c", &cr);
    printf("Ascii code of char %c  is %d \n", cr, cr);

    // Question [6]
    int x = 5, y = 10;
    if (x == y)
    {
        printf("Numbers are equal \n");
    }
    else
    {
        if (x > y)
        {
            printf("x is bigger than y \n");
        }
        else
        {
            printf("y is bigger than x \n");
        }
    }

    // Question [7]
    int i = 0, arr1[3] = {0}, min = 1000000;
    for (i = 0; i < 3; i++)
    {
        printf("Enter number %d \n", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 3; i++)
    {
        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }
    printf("Minimum number is %d \n", min);
*/
    // Question [8]
    // int no = 0;
    // int coun = 0;
    // printf("Please enter Positive number : \n");
    // int check = scanf("%d", &no);
    // if (0 == check)
    // {
    //     printf("Pleasee enter positive integer number \n");
    // }
    // else if (no < 0)
    // {
    //     printf("False \n");
    // }
    // else if (0 == no)
    // {
    //     printf("True \n");
    // }
    // else
    // {

    //     for (coun = 1; coun * coun <= no; coun++)
    //     {
    //         if (coun * coun == no)
    //             printf("Ture \n");
    //     }
    //     printf("False \n");
    // }

    // // Question [9]
    // int grade;
    // printf("Enter your grade");
    // int flag = scanf("%d", &grade);

    // if (grade <= 0 || grade > 100 || flag == 0)
    // {
    //     printf("Enter Valid grade");
    // }
    // else if (grade < 50 && grade > 0)
    // {
    //     printf("Fail");
    // }
    // else if (grade >= 50 && grade < 65)
    // {
    //     printf("Pass");
    // }
    // else if (grade >= 65 && grade < 75)
    // {
    //     printf("Good");
    // }
    // else if (grade >= 75 && grade < 85)
    // {
    //     printf("Very good");
    // }
    // else if (grade >= 85 && grade <= 100)
    // {
    //     printf("Excellent");
    // }

    // Question [10]
    // int a, b;
    // char c;
    // printf("Enter A :");
    // int f1 = scanf("%d", &a);
    // printf("Enter B:");
    // int f2 = scanf(" %d", &b);

    // printf("Enter Operator: \n");
    // int f3 = scanf(" %c", &c);

    // if (0 == f1 || 0 == f2 || 0 == f3)
    // {
    //     printf("Please Enter valid Data \n");
    // }

    // switch (c)
    // {
    // case ('+'):
    //     printf("%d", a + b);
    //     break;

    // case ('-'):
    //     printf("%d", a - b);
    //     break;

    // case ('*'):
    //     printf("%d", a * b);
    //     break;

    // case ('/'):
    //     if (0 == b)
    //     {
    //         printf("Error");
    //     }
    //     printf("%.1f", (float)a / b);
    //     break;
    // }

    // Question [11]
    // int sum = 0, k = 0;

    // for (k = 1; k <= 100; k++)
    // {
    //     sum += k;
    // }

    // printf("Sum = %d", sum);

    // Question [12]
    // int l = 0, num = 0, fac = 1;
    // printf("Enter Positive integer number \n");
    // int c1 = scanf("%d", &num);
    // if (c1 == 0)
    // {
    //     printf("Please enter valid number \n");
    // }

    // for (l = 1; l <= num; l++)
    // {
    //     fac *= l;
    // }
    // printf("Factorial [ %d ]  = %d \n", num, fac);

    // Question [13]
    // int no = 0, m = 0, flag = 1;

    // printf("Enter Positive integer number \n");
    // int c2 = scanf(" %d", &no);
    // if (0 == c2 || no < 0)
    // {
    //     printf("Please enter valid number");
    // }

    // for (m = 2; m * m <= no; m++)
    // {
    //     if (no % m == 0)
    //     {
    //         flag = 0;
    //     }
    // }

    // if (1 == flag)
    // {
    //     printf("Number %d is Prime \n", no);
    // }
    // else
    // {
    //     printf("Number %d is Not Prime \n", no);
    // }

    // Question [14]
    // int alph;
    // printf("Alphabets: ");
    // for (alph = 'A'; alph <= 'Z'; alph++)
    // {
    //     printf("%c ", alph);
    // }

    // Question [15]
    // int num = 0, pow = 0, n = 0, res = 1;
    // printf("Enter number : \n");
    // scanf("%d", &num);
    // printf("Enter power : \n");
    // scanf("%d", &pow);

    // for (n = 1; n <= pow; n++)
    // {
    //     res *= num;
    // }

    // printf("Resul = %d", res);

    // Question [16]

    // int numb = 0, rem = 0, reversed_numb = 0;
    // printf("Enter a number: ");
    // scanf("%d", &numb);

    // while (0 != numb)
    // {
    //     rem = numb % 10;
    //     reversed_numb = reversed_numb * 10 + rem;
    //     numb /= 10;
    // }
    // printf("Reversed num = %d", reversed_numb);

    // Question [17]

    // Question [18]
    // int i = 0, j = 0;
    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question [19]
    // int i = 0, j = 0;
    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 5 - i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question [20]
    // int i, j, sp;

    // for (i = 1; i <= 5; i++)
    // {

    //     for (sp = 1; sp <= 5 - i; sp++)
    //     {
    //         printf(" ");
    //     }

    //     for (j = 1; j <= 2 * i - 1; j++)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // Question [21]
    // int i, j;

    // for (i = 0; i < 10; i++)
    // {
    //     for (j = 0; j < 10; j++)
    //     {
    //         if (i == j || i == 10 - 1 - j)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}