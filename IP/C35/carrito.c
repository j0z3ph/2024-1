/**
 * @file carrito.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#define UP 80
#define DOWN 72
#else
#define UP 65
#define DOWN 66
#define LEFT 68
#define RIGTH 67
#endif
#define ENTER 13

void gotoXY(int x, int y)
{
#ifdef _WIN32
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x - 1;
    dwPos.Y = y - 1;
    SetConsoleCursorPosition(hcon, dwPos);
#else
    printf("%c[%d;%df", 0x1B, y, x);
#endif
}

void clear()
{
    system("cls || clear");
}

char getKey()
{
    char c;
#ifndef _WIN32
    system("stty raw");
#endif
#ifdef _WIN32
    c = getch();
    if (c == 0)
    {
        c = getch();
    }
#else
    c = getc(stdin);
    if (c == 27)
    {
        c = getc(stdin);
        if (c == 92)
        {
            c = getc(stdin);
        }
    }
#endif
    return c;
}

int main()
{
    int x = 1, y = 1;
    char c;
    while (1)
    {
        clear();
        gotoXY(x, y);
        printf("Hola");
        //gotoXY(x, y);
        c = getKey();
        if (c == RIGTH)
        {
            x++;
        }
        if (c == LEFT)
        {
            x--;
        }
        if (c == DOWN)
        {
            y++;
        }
        if (c == UP)
        {
            y--;
        }
    }

    return 0;
}
