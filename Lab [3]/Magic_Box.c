#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y);

int main()
{
    int size = 0, i = 1, row=0 , col=0;

    printf("Enter Box Size  the number must be Odd \n");
    scanf("%d", &size);


    for(i=1 ; i<=size*size ; i++)
    {
        if(i==1)
        {
            row=1;
            col= (size+1)/2;

        }
        else if  (((i-1)%size) != 0)
        {
            col--;
            row--;
            if(row == 0)
            {
                row=size;
            }
            if(col == 0)
            {
                col=size;
            }
        }
        else{
            row++;
        }

        gotoxy(col*4,row*2);
        delay(1);
        printf("%d" , i);


    }

    return 0;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(int number_of_seconds)
{

    int milli_seconds = 1000 * number_of_seconds;

    int start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}


