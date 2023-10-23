#include <stdio.h>

int main()
{
    // Question [1]


    int x = 0;
    printf("Enter Number");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("Positive");
    }
    else if (0 == x)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }


    // Question [2]

    int num;
    printf("Enter Number:");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Number is Zero or negative");
    }
    else if (num%2 != 0)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even Number ");
    }



    // Question [3]

    int a=50 , b=40 , c=30 ;
    if(a>b && a>c) printf("a is biggest number");
    else if(b>a && b>c) printf("b is biggest number");
    else printf("c is the biggest number");


    // Question [4]

    int grade;
    printf("Enter your grade");
    scanf("%d" , &grade);

    if(grade <=0 || grade>100)
    {
        printf("Enter Valid grade");
    }
    else if(grade >= 85 && grade <=100)
    {
        printf("Excellent");
    }
    else if (grade >=75 && grade<85)
    {
        printf("Very good");
    }
    else if (grade >=65 && grade<75)
    {
        printf("Good");
    }
    else if (grade >= 50 && grade< 65)
    {
        printf("Pass");
    }
    else if (grade < 50 && grade >0)
    {
        printf("Fail");
    }



     // Question [5]

     int a , b ;
     char c;
     printf("Enter A :");
     scanf("%d" , &a);
     printf("Enter B:");
     scanf(" %d" , &b);
     if (b==0) printf("Error");

     printf("Enter Operator:");
     scanf(" %c" , &c );
     switch(c)
     {
        case('+'):
        printf("%d" , a+b );
        break;

        case('-'):
        printf("%d" , a-b );
        break;

        case('*'):
        printf("%d" , a*b );
        break;

        case('/'):
        printf("%.1f" , (float)a/b );
        break;

     }

    return 0;


}
