#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define BACK_SPACE 8
#define WHITE 14
#define RED 4
#define UP_KEY 72
#define DOWN_KEY 80
#define ENTER_KEY 13
#define ROW 5
#define EXTENDED -32
#define ESC 27
#define HOME_KEY 71
#define END_KEY 79
#define RIGHT_KEY 77
#define LEFT_KEY 75


void gotoxy(int x, int y);
void SetColor(int ForgC);




int main()
{

    char line[20] = {0};
    char c = 'a';
    int size = 0;
    int position = 5 ;
    gotoxy(3,8);
    printf("-------------------Line Editor-----------------\n");

    while(1 && ESC != c)
    {

        gotoxy(position,10);
        c = getch();

        if (EXTENDED == c)
        {
            c = getch();
        }


        switch(c)
        {

        case(LEFT_KEY):
            position--;
            if (position < 5)
            {
                position = size;
            }
            gotoxy(position, 10);
            break;

        case(RIGHT_KEY):
            position ++;

            if (position > 20)
            {
                position=5;
            }
            gotoxy(position, 10);

            break;

        case(END_KEY):
            position = size;
            gotoxy(position, 10);
            break;

        case(HOME_KEY):
            position = 5;
            gotoxy(position, 10);
            break;

        case(ENTER_KEY):
            gotoxy(5,20);
            printf("%s \n", line);

            break;


        case(BACK_SPACE):

            for (int i=position-5 ; i<20 ; i++)
            {
                line[i] = line[i+1];
            }

            line[20] = '\0';
            line[19] = ' ';
            gotoxy(5,10);
            printf("%s", line);
            size--;
            position--;
            if (position<0)
            {
                position = 0;
            }
            gotoxy(position, 10);

            break;


        default:
            if(position <= 20)
            {
                printf("%c", c);
                line[position-5] = c ;
                position++;

            }
            else
            {
                position = size+1;
            }
            gotoxy(position,10);

        }




    }

    return 0 ;
}

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

