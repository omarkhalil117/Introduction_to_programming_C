#include <stdio.h>

int main()
{
    
    int grade;
    printf("Enter your grade");
    int flag = scanf("%d", &grade);

    if (grade <= 0 || grade > 100 || flag == 0)
    {
        printf("Enter Valid grade");
    }
    else if (grade < 50 && grade > 0)
    {
        printf("Fail");
    }
    else if (grade >= 50 && grade < 65)
    {
        printf("Pass");
    }
    else if (grade >= 65 && grade < 75)
    {
        printf("Good");
    }
    else if (grade >= 75 && grade < 85)
    {
        printf("Very good");
    }
    else if (grade >= 85 && grade <= 100)
    {
        printf("Excellent");
    }
    
    return 0;
}
