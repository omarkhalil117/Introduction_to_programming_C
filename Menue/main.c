#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
typedef unsigned char  u8;
typedef signed char  s8;
typedef unsigned short int  u16;
typedef signed short int  s16;
typedef unsigned long int  u32;
typedef signed long int  s32;
#define WHITE 14
#define RED 4
#define UP_KEY 72
#define DOWN_KEY 80
#define ENTER_KEY 13
#define ROW 5
#define EXTENDED -32
#define ESC 27
// struct
struct student
{
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};


void scan_struct_Students(struct student s[]);
void print_struct_Students(struct student s[],int size );
void diplay_menue(int position);

void gotoxy(int x, int y);


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

int count=0 ;

int main ()
{
    char menue[3][10] = {"New", "Display", "Exit"};
    int position = 0, flag = 0, size = 0;
    struct student students[100];
    char c= 'a';

    while(1 && ESC != c)
    {
        display_menue(position, menue);

        c = getch();

        if (EXTENDED == c)
        {
            c = getch();
        }

        switch(c)
        {
        case DOWN_KEY :
            system("cls");
            position ++ ;
            if(3 == position)
            {
                position = 0 ;
            }

            break;

        case UP_KEY:
            system("cls");
            position--;
            if(-1 == position)
            {
                position=2;
            }
            break;

        case ENTER_KEY :
            switch(position)
            {
            case 0 :
                system("cls");
                gotoxy(ROW, 0);
                //printf("New");
                scan_struct_Students(students);
                break;

            case 1 :
                system("cls");
                gotoxy(ROW, 0);
                //printf("Display");
                print_struct_Students(students, count);
                printf("Enter any key to return");
                char ex = 'a';
                ex = getch();
                if(ex)
                {
                    system("cls");
                    position = 0 ;
                    display_menue(position, menue);
                }
                break;

            case 2 :
                system("cls");
                gotoxy(ROW, 0);
                //printf("Exit");
                getch();
                break;
            }
            break;
        }

    }
    return 0 ;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void display_menue(int position, char menue[3][10])
{
    switch(position)
    {
    case 0 :
        gotoxy(ROW,0);
        SetColor(RED);
        printf("%s \n", menue[0]);

        gotoxy(ROW,5);
        SetColor(WHITE);
        printf("%s \n", menue[1]);

        gotoxy(ROW,10);
        SetColor(WHITE);
        printf("%s \n", menue[2]);
        break;

    case 1 :
        gotoxy(ROW,0);
        SetColor(WHITE);
        printf("%s \n", menue[0]);

        gotoxy(ROW,5);
        SetColor(RED);
        printf("%s \n", menue[1]);

        gotoxy(ROW,10);
        SetColor(WHITE);
        printf("%s \n", menue[2]);
        break;

    case 2 :
        gotoxy(ROW,0);
        SetColor(WHITE);
        printf("%s \n", menue[0]);


        gotoxy(ROW,5);
        SetColor(WHITE);
        printf("%s \n", menue[1]);



        gotoxy(ROW,10);
        SetColor(RED);
        printf("%s \n", menue[2]);
        break;
    }

}


void scan_struct_Students(struct student s[] )
{

    char c = 'a';
    do
    {
        printf("Enter name [%d]",count+1);
        scanf("%[^\n]",s[count].name);
        printf("Enter age [%d]",count+1);
        scanf("%d",&s[count].age);
        printf("Enter ID [%d]",count+1);
        scanf("%d",&s[count].id);
        printf("Enter Gender [%d]",count+1);
        scanf(" %c", &s[count].gender);
        fflush(stdin);
        //s[count].gender = getchar();
        count++;
        printf("Do you want to continue (y) for yes (n) for no. \n");

        c = getch();
        if('n' == c)
        {
            system("cls");
        }

    }
    while('n' != c);

}
void print_struct_Students(struct student s[],int size )
{

    printf("----------------- Display -------------------- \n");
    for(int i=0; i<size; i++)
    {
        printf("name[%d] = %s \n",i+1,s[i].name);
        printf("gender[%d] = %c \n",i+1,s[i].gender);
        printf("age [%d]=  %d \n",i+1,s[i].age);
        printf("id [%d] =  %d \n",i+1,s[i].id);
    }
}
